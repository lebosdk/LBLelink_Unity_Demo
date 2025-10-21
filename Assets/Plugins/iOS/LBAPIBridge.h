//
//  LBAPIBridge.h
//  Tuanjie-iPhone
//
//  Created by lebo on 2025/4/9.
//

#import <Foundation/Foundation.h>
//#import "<#header#>"

NS_ASSUME_NONNULL_BEGIN

@interface LBAPIBridge : NSObject 
//<LBLelinkConnectionDelegate>

//+(void)initWithAPPID:(NSString*)APPID  APP_SECRET:(NSString*)APP_SECRET;
//
//+(void)startBrowse;
//
//+(void)startMirror:(NSString*)deviceName;

@end

#ifdef __cplusplus
extern "C" {
#endif

// 导出的 C 接口
void _init(char* APPID, char* APP_SECERT);

void _startBrowse();

void _stopBrowse();

void _connect();

void _disconnect();

void _startMirror(char* deviceName);

void _stopMirror();


#ifdef __cplusplus
}
#endif

NS_ASSUME_NONNULL_END
