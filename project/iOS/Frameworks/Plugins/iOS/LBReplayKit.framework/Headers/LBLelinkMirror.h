//
//  LBLelinkMirror.h
//  LBReplayKit
//
//  Created by lbkj on 2019/11/21.
//  Copyright © 2019 深圳乐播科技有限公司. All rights reserved.
//

#import <Foundation/Foundation.h>
//#import <LBLelinkKit/LBLelinkKit.h>
#import <AVFoundation/AVFoundation.h>
#import <ReplayKit/ReplayKit.h>

#import "LBLelinkKit.h"

NS_ASSUME_NONNULL_BEGIN
@class LBLelinkMirror;

@protocol LBLelinkMirrorDelegate <NSObject>

@optional
- (void)mirrorDidGetImage:(UIImage *)image;
- (void)mirrorDidStarted:(LBLelinkConnection *)connection;  // 镜像已开始
- (void)mirrorDidStoped:(LBLelinkConnection *)connection;   // 镜像已停止
- (void)mirrorError:(LBLelinkConnection *)connection onError:(NSError *)error; // 镜像出错
- (void)mirrorSampleRate:(NSInteger)videoCount audioCount:(NSInteger)audioCount; // 每秒回调一次采样率
- (void)mirror:(NSInteger)videoCount videoEncodedCount:(NSInteger)videoEncodedCount audioCount:(NSInteger)audioCount audioEncodedCount:(NSInteger)audioEncodedCount; // 宿主编码频率和采样频率

// 镜像代理接口
- (void)lelinkMirror:(LBLelinkMirror *)lelinkMirror onError:(NSError *)error; // 镜像出错
- (void)lelinkMirror:(LBLelinkMirror *)lelinkMirror didConnWithLelinkService:(LBLelinkService *)lelinkService;
- (void)lelinkMirror:(LBLelinkMirror *)lelinkMirror disConnWithLelinkService:(LBLelinkService *)lelinkService;

- (void)lelinkMirror:(LBLelinkMirror *)lelinkMirror preStartWithLelinkService:(LBLelinkService *)lelinkService;
- (void)lelinkMirror:(LBLelinkMirror *)lelinkMirror didStartWithLelinkService:(LBLelinkService *)lelinkService;
- (void)lelinkMirror:(LBLelinkMirror *)lelinkMirror didStopWithLelinkService:(LBLelinkService *)lelinkService;
// cartonCount,一个数值，目前没有意义
- (void)lelinkMirror:(LBLelinkMirror *)lelinkMirror videoMirrorDidCarton:(NSInteger)cartonCount;

- (void)lelinkMirror:(LBLelinkMirror *)lelinkMirror sendVideoCount:(NSInteger)videoCount bitRateCount:(NSInteger)rateCount;
@end

// 需要设置sessionid和uuid，需要先设置
@interface LBLelinkMirror : NSObject
@property(nonatomic, weak) id<LBLelinkMirrorDelegate> delegate;
@property (nonatomic, copy, readonly) NSString *sessionId;
@property (nonatomic, copy, readonly) NSString *uuId;

+ (instancetype)shareInstance;

/**
 设置
 */
- (void)setAppGroupId:(NSString *)appGroupId;

/**
 开始镜像
 */
- (void)startMirror;

/**
 停止镜像
 */
- (void)stopMirror;

/**
暂停镜像
*/
- (void)pauseMirror;

/**
继续镜像
*/
- (void)resumeMirror;

/**
 是否在镜像中
 */
- (BOOL)isMirrored;

/**
 添加一个乐联设备镜像
 */
- (void)addMirrorService:(LBLelinkService *)service;

/**
 去掉一个乐联设备镜像
 */
- (void)removeMirrorService:(LBLelinkService *)service;

- (void)cleanMirrorDevice;

/**
发送音视频数据
 */
- (void)processSampleBuffer:(CMSampleBufferRef)sampleBuffer withType:(RPSampleBufferType)sampleBufferType API_AVAILABLE(ios(10.0));

- (void)setUUId:(NSString *)uuId sessionId:(NSString *)sessionId;

/**
 设置视频帧率
 
 @param fps   视频编码帧率
 */
- (void)setupVideoFps:(NSUInteger)fps;

- (void)setupVideoFps:(NSUInteger)fps bitrate:(NSInteger)bitrate maxBitrate:(NSInteger)maxBitrate minBitrate:(NSInteger)minBitrate frameWidth:(NSInteger)frameWidth frameHeight:(NSInteger)frameHeight;

/// 断开镜像连接
- (void)disconnectMirror;

@end

NS_ASSUME_NONNULL_END
