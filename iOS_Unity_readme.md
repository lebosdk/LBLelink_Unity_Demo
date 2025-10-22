[TOC]

[iOS SDK 接入参考文档](https://cloud.lebo.cn/document/d19d7c346d518247.html)

## 环境
* Unity 编辑器版本 `2022.3.29f1`

## iOS 原生投屏 SDK

* LBLelinkKit
* LBReplayAppKit
* LBReplayKit
* LBReplayExtension
* LBSREncoder

将以上的 `framework` 拖入到 `Assets` 文件夹下，并且在 `Assets` 文件夹下，新建 `iOSBridge.cs`、`ButtonClicked.cs`、`LelinkSDK.cs`、`LBAPIBridge.h`、`LBAPIBridge.m` 、`iOSCallback.cs`、`NativeBridge.cs` 、`INactiveBridge.cs` 文件

## 架构

![架构图](https://doc.hpplay.com.cn/Public/Uploads/2025-10-21/68f6f125d107d.png)

- ButtonClicked
  在 Unity 中一个脚本文件，主要是用来关联 Unity 层的按钮事件
- INactiveBridge
Unity 中的一个接口文件，`LelinkSDK`、`NativeBridge`、`iOSBridge`、`AndroidBridge`  都需要实现该接口方法
- LelinkSDK
在 Unity 层中的封装管理类
- NativeBridge
在 Unity 中对平台进行区分
- AndroidBridge
  安卓平台调用原生代码
- iOSBridge
  iOS 平台调用原生代码

## 代码

### ButtonClicked
作为一个 Unity 按钮脚本文件，包含 SDK 授权、设备搜索、停止搜索设备、开始镜像、停止镜像 等操作

```c++
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;  // Add TextMeshPro namespace
using static LelinkSDK;

public class ButtonClick : MonoBehaviour
{

    private string deviceName;
    // Start is called before the first frame update
    void Start()
    {
         // 获取当前对象上的 Button 组件
        Button connectButton = GetComponent<Button>();
        
        if (connectButton != null)
        {
            LeLog.Log("ButtonClick Button found!");
            // 添加点击事件
        
        }
        else
        {
            LeLog.LogError("ButtonClick Button component not found!");
        }
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    /// 初始化 SDK
    public void init() {
        LeLog.Log($"OnButtonClick {Application.platform}");
        
        LelinkSDK.getInstance().init("15442","3750af11e5cc4592cfa5c95664d5f23c");
    }

    /// 开始搜索设备
    public void browse() {
        LelinkSDK.getInstance().startBrowse();
    }

    /// 停止搜索设备
    public void stopBrowse() {
        LelinkSDK.getInstance().stopBrowse();
    }

    /// 连接设备
    public void connectDevice() {
        string deviceName = AppCastConfig.getInstance().getDeviceName();
        if(deviceName != null && deviceName != ""){
            LelinkSDK.getInstance().connect(deviceName);
        } else {
            LeLog.LogWarning("deviceName is null or empty");
        }
    }

    /// 断开当前连接的设备
    public void disconnect() {
        LelinkSDK.getInstance().disconnect();
    }

    /// 开始镜像
    public void mirror() {
        LelinkSDK.getInstance().startMirror();
    }

    /// 停止镜像
    public void stopMirror() {
        LelinkSDK.getInstance().stopMirror();
    }
}
```
在 Unity 中对事件进行关联后，开始实现 `LelinkSDK` 的投屏操作

### LelinkSDK

在实现 `LelinkSDK` 之前，首先创建一个 `INactiveBridge.cs` 文件，作为一个协议声明，方便拓展平台，例如 `iOS`、`Android` 等

#### INativeBridge
```C++
public interface INativeBridge
{
    /// 授权
    void init(string appId, string appSecret);
    
    /// 设置设备搜索回调对象
    void setOnBrowserListener(OnBrowserListener listener);

    /// 获取设备搜索回调对象
    OnBrowserListener getOnBrowserListener();
    
    /// 开始搜索设备
    void startBrowse();

    /// 停止搜索设备
    void stopBrowse();

    /// 连接设备，通过设备名称进行连接
    void connect(string deviceName);

    /// 断开连接
    void disconnect();

    /// 开始镜像
    void startMirror();

    /// 停止镜像
    void stopMirror();

    /// 销毁并回收资源
    void uninit();
}
```

#### LelinkSDK

```C#
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static INativeBridge;
using static NativeBridge;

public class LelinkSDK : INativeBridge
{

    private const string TAG = "LelinkSDK";
    private static LelinkSDK sInstance;
    private NativeBridge mNativeridge;
    

    private LelinkSDK(){
        mNativeridge = new NativeBridge();
    }

    public static LelinkSDK getInstance(){
        if(sInstance == null){
            sInstance = new LelinkSDK();
        }
        return sInstance;
    }

    public void init(string appId, string appSecret){
        LeLog.Log($"{TAG} init");
        mNativeridge.init(appId, appSecret);
    }

    public void setOnBrowserListener(OnBrowserListener listener){
        LeLog.Log($"{TAG} setOnBrowserListener");
        mNativeridge.setOnBrowserListener(listener);
    }

    public OnBrowserListener getOnBrowserListener(){
        LeLog.Log($"{TAG} getOnBrowserListener");
        return mNativeridge.getOnBrowserListener();
    }

    public void startBrowse(){
        LeLog.Log($"{TAG} startBrowse");
        mNativeridge.startBrowse();
    }

    public void stopBrowse(){
        LeLog.Log($"{TAG} stopBrowse");
        mNativeridge.stopBrowse();
    }

    public void connect(string deviceName){
        LeLog.Log($"{TAG} connect");
        mNativeridge.connect(deviceName);
    }

    public void disconnect(){
        LeLog.Log($"{TAG} disconnect");
        mNativeridge.disconnect();
    }

    public void startMirror(){
        LeLog.Log($"{TAG} startMirror");
        mNativeridge.startMirror();
    }

    public void stopMirror(){
        LeLog.Log($"{TAG} stopMirror");
        mNativeridge.stopMirror();
    }

    public void uninit(){
        LeLog.Log($"{TAG} uninit");
        mNativeridge.uninit();
    }
}
```

#### NativeBridge
在该文件中，对不同的平台进行分别处理
```C#
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static INativeBridge;
using static AndroidBridge;
using static iOSBridge;
using static VirtualNativeBridge;

public class NativeBridge : INativeBridge
{

    private const string TAG = "NativeBridge";
    private INativeBridge bridge;

    public NativeBridge(){
        LeLog.Log($"{TAG} Application.platform: {Application.platform}");
        if(Application.platform == RuntimePlatform.Android){
            bridge = new AndroidBridge();
        } else if(Application.platform == RuntimePlatform.IPhonePlayer){
            bridge = new iOSBridge();
        } else {
            bridge = new VirtualNativeBridge();
        }
        
    }

    public void init(string appId, string appSecret){
            if(bridge == null){
                LeLog.LogWarning($"{TAG} bridge is null");
                return;
            }
            LeLog.Log($"{TAG} init");
            bridge.init(appId, appSecret);
    }

    public void setOnBrowserListener(OnBrowserListener listener){
        if(bridge == null){
            LeLog.LogWarning($"{TAG} bridge is null");
            return;
        }
        LeLog.Log($"{TAG} setOnBrowserListener");
        bridge.setOnBrowserListener(listener);
    }

    public OnBrowserListener getOnBrowserListener(){
        if(bridge == null){
            LeLog.LogWarning($"{TAG} bridge is null");
            return null;
        }
        return bridge.getOnBrowserListener();
    }

    public void startBrowse(){
        if(bridge == null){
            LeLog.LogWarning($"{TAG} bridge is null");
            return;
        }
        LeLog.Log($"{TAG} startBrowse");
        bridge.startBrowse();
    }

    public void stopBrowse(){
        if(bridge == null){
            LeLog.LogWarning($"{TAG} bridge is null");
            return;
        }
        LeLog.Log($"{TAG} stopBrowse");
        bridge.stopBrowse();
    }

    public void connect(string deviceName){
        if(bridge == null){
            LeLog.LogWarning($"{TAG} bridge is null");
            return;
        }
        LeLog.Log($"{TAG} connect");
        bridge.connect(deviceName);
    }

    public void disconnect(){
        if(bridge == null){
            LeLog.LogWarning($"{TAG} bridge is null");
            return;
        }
        LeLog.Log($"{TAG} disconnect");
        bridge.disconnect();
    }

    public void startMirror(){
        if(bridge == null){
            LeLog.LogWarning($"{TAG} bridge is null");
            return;
        }
        LeLog.Log($"{TAG} startMirror");
        bridge.startMirror();
    }

    public void stopMirror(){
        if(bridge == null){
            LeLog.LogWarning($"{TAG} bridge is null");
            return;
        }
        LeLog.Log($"{TAG} stopMirror");
        bridge.stopMirror();
    }

    public void uninit(){
        if(bridge == null){
            LeLog.LogWarning($"{TAG} bridge is null");
            return;
        }
        LeLog.Log($"{TAG} uninit");
        bridge.uninit();
    }

}
```

#### iOSBridge

```C#
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Runtime.InteropServices;
using static INativeBridge;

public class iOSBridge : INativeBridge
{
    private const string TAG = "iOSBridge";
    private OnBrowserListener onBrowserListener;
    #if UNITY_IOS

    [DllImport("__Internal")]
    private static extern void _init(string APPID,string APP_SECRET);

    [DllImport("__Internal")]
    private static extern void _startBrowse();

    [DllImport("__Internal")]
    private static extern void _stopBrowse();

    [DllImport("__Internal")]
    private static extern void _connect(string deviceName);

    [DllImport("__Internal")]
    private static extern void _disconnect();

    [DllImport("__Internal")]
    private static extern void _startMirror();
    
    [DllImport("__Internal")]
    private static extern void _stopMirror();
    #endif
    

    public void init(string appId, string appSecret){
        LeLog.Log($"{TAG} init");
        #if UNITY_IOS
        _init(appId,appSecret);
        #endif
    }

    public void setOnBrowserListener(OnBrowserListener listener){
        LeLog.Log($"{TAG} setOnBrowserListener");
        this.onBrowserListener = listener;
    }

    public OnBrowserListener getOnBrowserListener(){
        LeLog.Log($"{TAG} getOnBrowserListener");
        return this.onBrowserListener;
    }

    public void startBrowse(){
        LeLog.Log($"{TAG} startBrowse");
        #if UNITY_IOS
        _startBrowse();
        #endif
    }

    public void stopBrowse(){
        LeLog.Log($"{TAG} stopBrowse");
        #if UNITY_IOS
        _stopBrowse();
        #endif
    }

    public void connect(string deviceName){
        LeLog.Log($"{TAG} connect {deviceName}");
        #if UNITY_IOS
        _connect(deviceName);
        #endif
    }

    public void disconnect(){
        LeLog.Log($"{TAG} disconnect");
        #if UNITY_IOS
        _disconnect();
        #endif
    }

    public void startMirror(){
        LeLog.Log($"{TAG} startMirror");
        #if UNITY_IOS
        _startMirror();
        #endif
    }

    public void stopMirror(){
        LeLog.Log($"{TAG} stopMirror");
        #if UNITY_IOS
        _stopMirror();
        #endif
    }

    public void uninit(){
        LeLog.Log($"{TAG} uninit");
    }
}
```

#### iOSCallback

```C#
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public class iOSCallback : MonoBehaviour
{
    [Serializable]
    private class CallbackData
    {
        public string callbackType;
        public string content;
    }

    public void callFromIOS(string content)
    {
        LeLog.Log($"iOSCallback callFromIOS: {content}");

        // 使用 JsonUtility 解析 JSON 字符串
        CallbackData data = JsonUtility.FromJson<CallbackData>(content);
        if (data.callbackType == "onDeviceFound")
        {
            // 设备列表回调
            onDeviceFound(data.content);
        }
    }

    private void onDeviceFound(string content)
    {
        // 解析设备列表
        List<string> deviceList = new List<string>();
        string[] devices = content.Split(',');
        foreach (string device in devices)
        {
            if(device != null && device != ""){
                deviceList.Add(device);
            }
        }
        // 调用 OnBrowserListener 的 onDeviceFound 方法
        OnBrowserListener onBrowserListener = LelinkSDK.getInstance().getOnBrowserListener();
        if (onBrowserListener != null)
        {
            onBrowserListener.onDeviceFound(deviceList);
        } else {
            LeLog.LogWarning($"iOSCallback onBrowserListener is null");
        }
    }
}
```
以上就是对整个 Unity 基于 LelinkSDK 封装的一个架构及代码封装介绍，下面对 iOS 工程重点介绍

## iOS 工程
iOS 实现镜像功能，需要一个主程序和扩展程序来实现。**Demo 中 project 文件下面的 iOS 文件夹工程是运行不起来的，下载 Demo 下来后，需要自己再重新生成一个新的 iOS 工程，这里只作为一个参考，按照下面的文档来操作即可。**

### 主程序 info.plist 文件修改

![主程序 info.plist 文件修改](https://doc.hpplay.com.cn/Public/Uploads/2025-10-21/68f6f8f2640a7.png)

在主程序中的 info.plist 文件添加以上内容

### 创建扩展程序
iOS 需要一个扩展程序来实现屏幕音视频数据采集，所以需要在工程中创建一个扩展程序
![](https://doc.hpplay.com.cn/Public/Uploads/2025-10-21/68f6f9473cfdf.png)
选择好后，给扩展程序命名后创建
![](https://doc.hpplay.com.cn/Public/Uploads/2025-10-21/68f6f957301c7.png)
选择 `Activate`，创建成功后
![](https://doc.hpplay.com.cn/Public/Uploads/2025-10-21/68f6f974a947e.png)
这里会有刚刚输入名称的 `target`，选择这个 `target`，添加 `App Groups`
![](https://doc.hpplay.com.cn/Public/Uploads/2025-10-21/68f6f9aec8dfc.png)
然后根据证书，选择自己的 App Groups，**同时主程序也需要添加 App Groups，流程也是这样操作**
![](https://doc.hpplay.com.cn/Public/Uploads/2025-10-21/68f6f9e67cacf.png)

创建好扩展程序后，将 `Framework` 引入到扩展程序中，需要引入 `LBLelinkKit`、`LBReplayKit`、`LBReplayKitExtension`、`LBSREncoder`
![](https://doc.hpplay.com.cn/Public/Uploads/2025-10-21/68f701ef44e1b.png)
![](https://doc.hpplay.com.cn/Public/Uploads/2025-10-21/68f701f51192f.png)
![](https://doc.hpplay.com.cn/Public/Uploads/2025-10-21/68f701fa5fb40.png)
其他的 Framework 也需要同样的操作

**默认 UnityFramework 会全部包含 LBLelinkKit、LBReplayAppKit、LBReplayKit、LBReplayKitExtension、LBSREncoder，可以将 LBReplayKit、LBReplayKitExtension、LBSREncoder 这三个从 UnityFramework 移除，这三个只需要放在扩展程序就行了，这样能减少安装包的体积**
![](https://doc.hpplay.com.cn/Public/Uploads/2025-10-21/68f7052e9f97f.png)
#### 添加依赖库
![](https://doc.hpplay.com.cn/Public/Uploads/2025-10-21/68f720f7965e8.png)

### LBAPIBridge
LBAPIBridge 文件是 iOS 平台文件，.h 、.m 两个文件，在 iOS 平台实现投屏功能的具体接入实现文件，首先创建出 LBAPIBridge.h 、LBAPIBridge.m 文件，并且放入到 Assets 目录下，然后通过 Unity 导出 iOS 工程，就会同时将 LBAPIBridge 文件导出到 iOS 工程中

![](https://doc.hpplay.com.cn/Public/Uploads/2025-10-21/68f7213f35b42.png)

然后根据 [SDK集成(iOS) | 乐播云文档中心](https://cloud.lebo.cn/document/d19d7c346d518247.html) 进行集成，在 LBAPIBridge 文件中实现授权、设备搜索、停止搜索设备、连接设备、断开连接、开始镜像、停止镜像 功能

#### LBAPIBridge.h

```C
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

#ifdef __cplusplus
extern "C" {
#endif

// 导出的 C 接口
void _init(char* APPID, char* APP_SECERT);

void _startBrowse();

void _stopBrowse();

void _connect(char* deviceName);

void _disconnect();

void _startMirror();

void _stopMirror();


#ifdef __cplusplus
}
#endif

@interface LBAPIBridge : NSObject

+(instancetype)shareInstance;
-(void)initWithAPPID:(NSString*)APPID  APP_SECRET:(NSString*)APP_SECRET;
-(void)startBrowse;
- (void)stopBrowse;
- (void)connect:(NSString *)deviceName;
- (void)disconnect;
-(void)startMirror;
-(void)stopMirror;

@end

NS_ASSUME_NONNULL_END
```
#### LBAPIBridge.m

```C
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
        [[LBAPIBridge shareInstance] connect:[NSString stringWithUTF8String:deviceName]];
    }

    void _disconnect() {
        [[LBAPIBridge shareInstance] disconnect];
    }

    void _startMirror(char* deviceName) {
        [[LBAPIBridge shareInstance] startMirror];
    }
    
    void _stopMirror() {
        [LBAPIBridge.shareInstance stopMirror];
    }
    


#ifdef __cplusplus
}
#endif

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
    [LBLelinkKit setAppGroupId:appGroupId];
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
    NSLog(@"connect");
    
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
    [[LBLelinkMirrorEngine shareInstance] setAppGroupId:@"group.com.hpplay.HPPlayTVBCExtension"];
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
}


- (void)mirrorOnError:(NSError *)error mirrorStype:(LBLelinkMirrorStype)mirrorStype{
}
- (void)mirrorDidBroadcastExtensionStartedMirrorStype:(LBLelinkMirrorStype)mirrorStype{
}

- (void)mirrorDidBroadcastExtensionStopedMirrorStype:(LBLelinkMirrorStype)mirrorStype{
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
}

- (void)mirrorPublicStreamQuality:(nonnull NSDictionary *)quality andRTCQualitys:(nonnull NSArray<NSDictionary *> *)rtcQualitys { 
    NSLog(@"");
}



- (LBLelinkBrowser *)lelinkBrowser{
    if (_lelinkBrowser == Nil) {
        _lelinkBrowser = [[LBLelinkBrowser alloc] init];
        _lelinkBrowser.delegate = (id)self;
    }
    return _lelinkBrowser;
}

-(NSMutableArray *)cacheServiceArray{
    if(_cacheServiceArray == Nil) {
        _cacheServiceArray = [NSMutableArray array];
    }
    return _cacheServiceArray;
}

- (LBLelinkConnection *)lelinkConnection{
    if(_lelinkConnection == Nil) {
        _lelinkConnection = [[LBLelinkConnection alloc] init];
        _lelinkConnection.delegate = self;
    }
    return _lelinkConnection;
}


@end
```

上面就是对主程序的实现，下面介绍创建扩展程序和实现镜像功能，Unity 导出的工程是不会自动创建扩展程序，所以需要我们自己手动去创建，并且每次从 Unity 同步到 iOS 工程时，要选择 append，而不是 replace，否则又需要手动去创建扩展程序

### 拓展程序实现
![](https://doc.hpplay.com.cn/Public/Uploads/2025-10-21/68f7223991d3c.png)
#### SampleHandler.m
```C
//
//  SampleHandler.m
//  capture
//
//  Created by guogt on 2025/4/28.
//


#import "SampleHandler.h"
#import <LBReplayKitExtension/LBReplayKitExtension.h>

#define TAG @"SampleHandler"
// 重定义 NSLog，增加日志前缀
#define NSLog(fmt, ...) NSLog((@"%@:<%@>: %s " "%d行 : " fmt), TAG, [NSThread currentThread], __FUNCTION__, __LINE__, ##__VA_ARGS__);

@interface SampleHandler ()<LBLelinkMirrorExtensionDelegate>

@end


@implementation SampleHandler

- (void)broadcastStartedWithSetupInfo:(NSDictionary<NSString *,NSObject *> *)setupInfo {
    // User has requested to start the broadcast. Setup info from the UI extension can be supplied but optional.
    NSString *appGroupId = @"group.com.hpplay.HPPlayTVBCExtension";
    [LBLelinkMirrorExtension sharedInstance].delegate = self;
    [LBLelinkKit setAppGroupId:appGroupId];
    [[LBLelinkMirrorExtension sharedInstance] setAppGroupId:appGroupId];
    [[LBLelinkMirrorExtension sharedInstance] startMirror];
}

- (void)broadcastPaused {
    // User has requested to pause the broadcast. Samples will stop being delivered.
    [[LBLelinkMirrorExtension sharedInstance] paused];
}

- (void)broadcastResumed {
    // User has requested to resume the broadcast. Samples delivery will resume.
    [[LBLelinkMirrorExtension sharedInstance] resumed];
}

- (void)broadcastFinished {
    // User has requested to finish the broadcast.
    [[LBLelinkMirrorExtension sharedInstance] finished];
}

- (void)processSampleBuffer:(CMSampleBufferRef)sampleBuffer withType:(RPSampleBufferType)sampleBufferType {
    [[LBLelinkMirrorExtension sharedInstance] processSampleBuffer:sampleBuffer withType:sampleBufferType];
    switch (sampleBufferType) {
        case RPSampleBufferTypeVideo:
            // Handle video sample buffer
            break;
        case RPSampleBufferTypeAudioApp:
            // Handle audio sample buffer for app audio
            break;
        case RPSampleBufferTypeAudioMic:
            // Handle audio sample buffer for mic audio
            break;
            
        default:
            break;
    }
}

#pragma mark - 主动停止录屏
- (void)stopWithMessage:(NSString *)message {
    NSDictionary * userInfo = @{NSLocalizedFailureReasonErrorKey: message};
    [self finishBroadcastWithError:[NSError errorWithDomain:@"ScreenShare" code:-1 userInfo:userInfo]];
}

#pragma mark - LBMirrorExtensionDelegate

- (void)lelinkMirrorError:(NSError *)error{
    NSLog(@"lelinkMirrorError error:%@",error);
    [self stopWithMessage:[NSString stringWithFormat:@"error code:%zd userInfo:%@",error.code,[error.userInfo objectForKey:@"errorInfo"]]];
}

- (void)hostAppResponseWithStarted:(BOOL)started {
     NSLog(@"%s started:%d", __func__, started);
    if (!started) {
       //  [self stopWithMessage:@"APP没有启动, 请点击“前往应用程序”启动APP！"];
    } else {
        NSLog(@"App 已经启动了");
    }
}

- (void)hostAppReceiveHeartBeat { 
    NSLog(@"");
}


- (void)hostAppStopExtensionApp { 
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(0.5 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
        [self stopWithMessage:nil];
    });
}


- (void)lelinkMirrorExtensionError:(nonnull NSError *)error { 
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(0.4 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
        [self stopWithMessage:nil];
    });
}


- (void)hostAppStopPush {
    NSLog(@"App 主动停止镜像");
    [self stopWithMessage:@"APP停止镜像！"];
}

@end
```
