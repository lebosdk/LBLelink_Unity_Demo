//
//  LBLelinkMirrorError.h
//  LBReplayKit
//
//  Created by lbkj on 2019/11/20.
//  Copyright © 2019 深圳乐播科技有限公司. All rights reserved.
//

#import <Foundation/Foundation.h>

extern NSString * const __nonnull LBMirrorErrorDomain;
extern NSString * const __nonnull LBMirrorConnErrorDomain;
extern NSString * const __nonnull LBMirrorVideoErrorDomain;
extern NSString * const __nonnull LBMirrorAudioErrorDomain;

/** 镜像错误  - 暴露给第三方使用 ？ */
typedef NS_ENUM(NSInteger, LBMirrorErrorCode) {
    LBMirrorErrorCodeUnknown = -11100,                   // 未知错误
    LBMirrorErrorCodeConnFail = -11101,                  // 连接失败
};

/** 连接相关错误代码 */
typedef NS_ENUM(NSInteger, LBMirrorConnErrorCode) {
    LBMirrorConnErrorCodeUnknown = -10000,                   // 未知错误
    LBMirrorConnErrorCodeIpIsNil = -10001,                   // ip为空
    LBMirrorConnErrorCodePortIsNil = -10002,                 // 端口为空
    LBMirrorConnErrorCodeConnFail = -10003,                  // 连接出错
    LBMirrorConnErrorCodeReceiveStoppedDeviceLimit = -10004, // 接收端停止设备限制
    LBMirrorConnErrorCodeReceiveStoppedOther = -10005,       // 接收端停止其它原因
    LBMirrorConnErrorCodeReceiveStoppedActiveExit = -10006,  // 接收端主动停止播放
};

/** 视频socket连接相关错误代码 */
typedef NS_ENUM(NSInteger, LBMirrorVideoErrorCode) {
    LBMirrorVideoErrorCodeUnknown   = -11000,                   // 未知错误
    LBMirrorVideoErrorCodePortIsNil = -11001,                  // 端口为空
    LBMirrorVideoErrorCodeConnFail  = -11003,                  // 连接出错
    LBMirrorVideoErrorCodeTranferFail  = -11004,               // 传输视频流出错
    LBMirrorVideoErrorCodeDisConn  = -11005,                  // 断开连接
    LBMirrorVideoErrorCodeWriteTimeout  = -11006,             // 数据传输超时
};

/** 音频socket连接相关错误代码 */
typedef NS_ENUM(NSInteger, LBMirrorAudiorrorCode) {
    LBMirrorAudioErrorCodeUnknown   = -11000,                   // 未知错误
    LBMirrorAudioErrorCodePortIsNil = -11001,                  // 端口为空
    LBMirrorAudioErrorCodeConnFail  = -11003,                  // 连接出错
    LBMirrorAudioErrorCodeTranferFail  = -11004,               // 传输音频流出错
    LBMirrorAudioErrorCodeDisConn  = -11005,                  // 断开连接
};
