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

/// 单例
+ (instancetype)shareInstance;

/// 初始化
- (void)initWithAPPID:(NSString*)APPID  APP_SECRET:(NSString*)APP_SECRET;
/// 开始搜索设备
- (void)startBrowse;
/// 停止搜索设备
- (void)stopBrowse;
/// 连接设备
- (void)connect:(NSString *)deviceName;
/// 断开连接
- (void)disconnect;
/// 开始镜像
- (void)startMirror;
/// 停止镜像
- (void)stopMirror;

@end

NS_ASSUME_NONNULL_END