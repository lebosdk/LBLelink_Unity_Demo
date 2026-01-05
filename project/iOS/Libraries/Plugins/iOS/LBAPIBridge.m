#import "LBAPIBridge.h"
#include <Foundation/Foundation.h>
#import <LBLelinkKit/LBLelinkKit.h>
#import <LBReplayAppKit/LBReplayAppKit.h>
#import <ReplayKit/ReplayKit.h>
#import <UnityFramework//UnityFramework.h>

#define TAG @"LBAPIBridge"
// 重定义 NSLog，增加日志前缀
#define NSLog(fmt, ...) NSLog((@"%@:<%@>: %s " "%d行 : " fmt), TAG, [NSThread currentThread], __FUNCTION__, __LINE__, ##__VA_ARGS__);

#ifdef __cplusplus
extern "C" {
#endif

    void _init(char* APPID, char* APP_SECERT) {
        NSLog(@"initWithAPPID:%s", APPID);
        [LBAPIBridge.shareInstance initWithAPPID:[NSString stringWithUTF8String:APPID]
                                      APP_SECRET:[NSString stringWithUTF8String:APP_SECERT]];
    }

    void _startBrowse() {
        [LBAPIBridge.shareInstance startBrowse];
    }
    
    void _stopBrowse() {
        [[LBAPIBridge shareInstance] stopBrowse];
    }

    void _connect(char* deviceName) {
        if (deviceName == NULL || strlen(deviceName) == 0) {
            NSLog(@"connect deviceName is empty");
            return;
        }
        [[LBAPIBridge shareInstance] connect:[NSString stringWithUTF8String:deviceName]];
    }

    void _disconnect() {
        [[LBAPIBridge shareInstance] disconnect];
    }

    void _startMirror() {
        [[LBAPIBridge shareInstance] startMirror];
    }
    
    void _stopMirror() {
        [LBAPIBridge.shareInstance stopMirror];
    }
    


#ifdef __cplusplus
}
#endif

#define APP_GROUP_ID @"group.com.hpplay.HPPlayTVBCExtension"

@interface LBAPIBridge ()<LBLelinkConnectionDelegate, LBLelinkMirrorEngineDelegate>

@property (nonatomic,strong)LBLelinkBrowser *lelinkBrowser;
@property (nonatomic,strong)NSMutableArray<LBLelinkService *> *cacheServiceArray;
@property (nonatomic,strong)LBLelinkConnection *lelinkConnection;
@property (nonatomic,strong)RPSystemBroadcastPickerView *broadcastPicker;

@end


@implementation LBAPIBridge


+(instancetype) shareInstance{
    // 静态变量，用于存储单例实例
       static LBAPIBridge *sharedInstance = nil;
       // 使用 dispatch_once 确保初始化代码只执行一次，线程安全
       static dispatch_once_t onceToken;
       dispatch_once(&onceToken, ^{
           sharedInstance = [[LBAPIBridge alloc] init];
       });
       
       return sharedInstance;
}

-(void)initWithAPPID:(NSString *)APPID APP_SECRET:(NSString *)APP_SECRET{
    NSLog(@"initWithAPPID:%@", APPID);
    [LBLelinkKit setAppGroupId:APP_GROUP_ID];
    [LBLelinkKit enableLog:YES];
    dispatch_async(dispatch_get_global_queue(0, 0), ^{
            NSError * error = nil;
            BOOL result = [LBLelinkKit authWithAppid:APPID secretKey:APP_SECRET error:&error];
            if (result) {
                NSLog(@"授权成功");
            }else{
                NSLog(@"授权失败：error = %@",error);
            }
        });
}

-(void)startBrowse{
    NSLog(@"startBrowse");
    [self.lelinkBrowser searchForLelinkService];
}

- (void)stopBrowse {
    
    NSLog(@"stopBrowse");
    [self.lelinkBrowser stop];
}

- (void)connect:(NSString *)deviceName {
    NSLog(@"connect %@", deviceName);
    
    [self p_connectDeviceWithName:deviceName];
}

- (void)disconnect {
    NSLog(@"disconnect");
    [self.lelinkConnection disConnect];
}

-(void)startMirror {
    NSLog(@"startMirror");
    if (!self.lelinkConnection.isConnected) {
        NSLog(@"当前未连接设备，请先连接设备");
        return;
    }
    
    [LBLelinkMirrorEngine shareInstance].delegate = self;
    [[LBLelinkMirrorEngine shareInstance] setAppGroupId:APP_GROUP_ID];
    [[LBLelinkMirrorEngine shareInstance] addMirrorDeviceWithConnection:self.lelinkConnection];
}

-(void)stopMirror{
    [self showBroadcastPickerCompleteBlock:^(BOOL succeed, NSString *serviceName, NSError *error) {
        
    }];
}

#pragma mark - Private

/// 回调设备列表
- (void)p_callbackDevices {
    
    NSArray *array = [NSArray arrayWithArray:self.cacheServiceArray];
    dispatch_async(dispatch_get_global_queue(0, 0), ^{
        NSMutableArray *devices = [NSMutableArray array];
        for (LBLelinkService *service in array) {
            if (service.lelinkServiceName &&
                [service.lelinkServiceName isKindOfClass:[NSString class]] &&
                service.lelinkServiceName.length) {
                [devices addObject:service.lelinkServiceName];
            }
        }
        
        NSString *devicesString = [devices componentsJoinedByString:@","];
        NSDictionary *dictionary = @{
            @"callbackType" : @"onDeviceFound",
            @"content" : devicesString
        };
        NSData *data = [NSJSONSerialization dataWithJSONObject:dictionary options:NSJSONWritingPrettyPrinted error:nil];
        NSString *string = [[NSString alloc] initWithData:data encoding:NSUTF8StringEncoding];
        NSLog(@"准备回调 : %@", string);
        
        [[UnityFramework getInstance] sendMessageToGOWithName:"LelinkSDK"
                                                 functionName:"callFromIOS"
                                                      message:[string UTF8String]];
    });
}

/// 连接设备
/// - Parameter deviceName: 设备名称
- (void)p_connectDeviceWithName:(NSString *)deviceName {
    
    NSLog(@"连接设备 %@", deviceName);
    
    if (deviceName &&
        [deviceName isKindOfClass:[NSString class]] &&
        deviceName.length) {
        NSArray *devices = [NSArray arrayWithArray:self.cacheServiceArray];
        for (LBLelinkService *service in devices) {
            if ([deviceName isEqualToString:service.lelinkServiceName]) {
                NSLog(@"匹配到设备 %@", service);
                self.lelinkConnection.lelinkService = service;
                [self.lelinkConnection connect];
                break;
            }
        }
    }
}

#pragma mark - LBLelinkBrowserDelegate
// 方便调试，错误信息会在此代理方法中回调出来
- (void)lelinkBrowser:(LBLelinkBrowser *)browser onError:(NSError *)error {
    NSLog(@"lelinkBrowser onError error = %@",error);
}

// 搜索到服务时，会调用此代理方法，将设备列表在此方法中回调出来
// 注意：如果不调用stop，则当有服务信息和状态更新以及新服务加入网络或服务退出网络时，会调用此代理，将新的设备列表回调出来
- (void)lelinkBrowser:(LBLelinkBrowser *)browser didFindLelinkServices:(NSArray<LBLelinkService *> *)services {
    NSLog(@"搜索到设备数 %zd", services.count);
//    self.lelinkServices = services;
    if(services && services.count >0) {
        [self.cacheServiceArray removeAllObjects];
        [self.cacheServiceArray addObjectsFromArray:services];
    }
    
    [self p_callbackDevices];
}


#pragma mark - LBLelinkConnectionDelegate

- (void)lelinkConnectionDidStartRetryConnect:(LBLelinkConnection *)connection {
    
}

/**
 连接出错代理回调

 @param connection 当前连接
 @param error 错误信息
 */
- (void)lelinkConnection:(LBLelinkConnection *)connection onError:(NSError *_Nullable)error {
    
    NSLog(@"连接设备 %@ 失败, error=%@", connection.lelinkService.lelinkServiceName, error);
}

/**
 连接成功代理回调

 @param connection 当前连接
 @param service 当前连接的服务
 */
- (void)lelinkConnection:(LBLelinkConnection *)connection didConnectToService:(LBLelinkService *)service{
    
    NSLog(@"连接设备 %@ 成功", service.lelinkServiceName);
}

/**
 连接断开代理回调

 @param connection 当前连接
 @param service 当前服务
 */
- (void)lelinkConnection:(LBLelinkConnection *)connection disConnectToService:(LBLelinkService *)service{
    
    NSLog(@"设备断开连接 %@", service.lelinkServiceName);
}

#pragma mark  - LBLelinkMirrorEngineDelegate
- (void)mirrorAddMirrorDeviceSucceedConnection:(LBLelinkConnection *)lelinkConnection mirrorStype:(LBLelinkMirrorStype)mirrorStype{
    // 添加设备成功
    // 添加成功后，实现1.4 开始直播镜像，弹出系统“直播屏幕”弹窗，用户点击开始直播，即可镜像
    [self showBroadcastPickerCompleteBlock:^(BOOL succeed, NSString *serviceName, NSError *error) {
        if (succeed) {
            // [self addTextString:[NSString stringWithFormat:@"弹直播窗口"]];
        }else{
            // [self addTextString:[NSString stringWithFormat:@"弹直播窗口失败:%@",error]];
        }
    }];
}


// 自动弹出系统直播窗口
- (void)showBroadcastPickerCompleteBlock:(void (^)(BOOL succeed,NSString *serviceName,NSError * error))completeBlock{
    if ([UIDevice currentDevice].systemVersion.doubleValue >= 12.0) {
        dispatch_async(dispatch_get_main_queue(), ^{
#if TARGET_IPHONE_SIMULATOR
            NSError *error = [NSError errorWithDomain:NSCocoaErrorDomain code:-398 userInfo:@{@"errorInfo":@"模拟器不支持系统直播投屏"}];
            completeBlock(NO,nil,error);
#else
            if (@available(iOS 12.0, *)) {
                self.broadcastPicker = [[RPSystemBroadcastPickerView alloc] initWithFrame:CGRectMake(200, 200, 100, 100)];
                self.broadcastPicker.showsMicrophoneButton = NO;
                // 历史投屏成功过，过滤显示的直播程序列表，首次过滤，会有系统不显示程序的bug
                self.broadcastPicker.preferredExtension = @"com.hpplay.LBLelinkKit.Demo.capture";
            } else {
                // Fallback on earlier versions
            }
//                [self.view addSubview:self.broadcastPicker];
            
            if (@available(iOS 12.0, *)) {
                for (UIView * subView in self.broadcastPicker.subviews) {
                    if ([subView isKindOfClass:[UIButton class]]) {
                        UIButton * button = (UIButton *)subView;
                        [button sendActionsForControlEvents:UIControlEventTouchDown];
                        [button sendActionsForControlEvents:UIControlEventTouchUpInside];
                    }
                }
            } else {
                // Fallback on earlier versions
            }
            if ([RPScreenRecorder sharedRecorder].isRecording) {
                NSError *error = [NSError errorWithDomain:NSCocoaErrorDomain code:-399 userInfo:@{@"errorInfo":@"RPScreenRecorder录屏正在进行冲突"}];
                completeBlock(NO,nil,error);
                return;
            }
            completeBlock(YES,nil,nil);
#endif
        });
    }else if ([UIDevice currentDevice].systemVersion.doubleValue >= 11.0){
        // 系统 iOS11
        NSError *error = [NSError errorWithDomain:NSCocoaErrorDomain code:-400 userInfo:@{@"errorInfo":@"iOS11不支持显示系统直播选择器视图，需到系统控制中心选择录屏设备"}];
        completeBlock(NO,nil,error);
    }else{
        // 系统 iOS11 以下
        NSError *error = [NSError errorWithDomain:NSCocoaErrorDomain code:-401 userInfo:@{@"errorInfo":@"iOS11以下系统不支持系统录屏投屏"}];
        completeBlock(NO,nil,error);
    }
}


- (void)mirrorAddMirrorDeviceFailureConnection:(LBLelinkConnection *)lelinkConnection error:(NSError *)error{
    NSLog(@"mirrorAddMirrorDeviceFailureConnection error = %@", error);
}


- (void)mirrorOnError:(NSError *)error mirrorStype:(LBLelinkMirrorStype)mirrorStype{
    NSLog(@"mirrorOnError error = %@", error);
}
- (void)mirrorDidBroadcastExtensionStartedMirrorStype:(LBLelinkMirrorStype)mirrorStype{
    NSLog(@"mirrorDidBroadcastExtensionStartedMirrorStype mirrorStype = %lu", (unsigned long)mirrorStype);
}

- (void)mirrorDidBroadcastExtensionStopedMirrorStype:(LBLelinkMirrorStype)mirrorStype{
    NSLog(@"mirrorDidBroadcastExtensionStopedMirrorStype mirrorStype = %lu", (unsigned long)mirrorStype);
}

- (void)mirrorMirrorDeviceDidConnectConnection:(LBLelinkConnection *)lelinkConnection mirrorStype:(LBLelinkMirrorStype)mirrorStype{
    //镜像成功
    NSLog(@"镜像成功");
}
- (void)mirrorMirrorDeviceDisConnectConnection:(LBLelinkConnection *)lelinkConnection mirrorStype:(LBLelinkMirrorStype)mirrorStype{
    // 镜像断开
    NSLog(@"镜像断开");
}
- (void)mirrorStateMirroring:(BOOL)mirroring mirrorStype:(LBLelinkMirrorStype)mirrorStype{
    // 镜像状态变化回调
    NSLog(@"mirrorStateMirroring mirroring = %@ mirrorStype = %lu", mirroring ? @"YES" : @"NO", (unsigned long)mirrorStype);
}

- (void)mirrorPublicStreamQuality:(nonnull NSDictionary *)quality andRTCQualitys:(nonnull NSArray<NSDictionary *> *)rtcQualitys { 
    NSLog(@"mirrorPublicStreamQuality quality = %@ rtcQualitys = %@", quality, rtcQualitys);
}

#pragma mark  - Lazy

- (LBLelinkBrowser *)lelinkBrowser {
    if (_lelinkBrowser == Nil) {
        _lelinkBrowser = [[LBLelinkBrowser alloc] init];
        _lelinkBrowser.delegate = (id)self;
    }
    return _lelinkBrowser;
}

-(NSMutableArray *)cacheServiceArray {
    if(_cacheServiceArray == Nil) {
        _cacheServiceArray = [NSMutableArray array];
    }
    return _cacheServiceArray;
}

- (LBLelinkConnection *)lelinkConnection {
    if(_lelinkConnection == Nil) {
        _lelinkConnection = [[LBLelinkConnection alloc] init];
        _lelinkConnection.delegate = self;
    }
    return _lelinkConnection;
}


@end
