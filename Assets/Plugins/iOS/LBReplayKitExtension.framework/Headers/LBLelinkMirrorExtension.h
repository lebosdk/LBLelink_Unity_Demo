//
//  LBLelinkMirrorExtension.h
//  LBReplayKitExtension
//
//  Created by wangzhijun on 2021/3/17.
//  Copyright © 2021 深圳乐播科技有限公司. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <ReplayKit/ReplayKit.h>

NS_ASSUME_NONNULL_BEGIN

@protocol LBLelinkMirrorExtensionDelegate <NSObject>

/// 主程序启动状态回调
/// - Parameter started: 是否已经启动
- (void)hostAppResponseWithStarted:(BOOL)started;

/// 主程序停止镜像
- (void)hostAppStopExtensionApp;

/// 镜像错误
/// - Parameter error: 错误信息
- (void)lelinkMirrorExtensionError:(NSError *)error;

/// 宿主APP的心跳，超过时间则可以视为宿主被杀死
- (void)hostAppReceiveHeartBeat;

@end

@interface LBLelinkMirrorExtension : NSObject

@property (nonatomic,weak)id<LBLelinkMirrorExtensionDelegate>delegate;

+ (instancetype)sharedInstance;

/// 设置 groupId
- (void)setAppGroupId:(NSString *)appGroupId;

/// 开始镜像
- (void)startMirror;

/// 停止镜像
- (void)stopMirror;

/// 设置镜像的帧率、码率以及分辨率 (局域网投屏有效)
/// - Parameters:
///   - fps: 帧率
///   - bitrate: 平均码率
///   - maxBitrate: 最大码率
///   - minBitrate: 最小码率
///   - frameWidth: 分辨率的宽度
///   - frameHeight: 分辨率的高度
- (void)setupVideoFps:(NSUInteger)fps bitrate:(NSInteger)bitrate maxBitrate:(NSInteger)maxBitrate minBitrate:(NSInteger)minBitrate frameWidth:(NSInteger)frameWidth frameHeight:(NSInteger)frameHeight;

/// 处理采集到的音视频数据
- (void)processSampleBuffer:(CMSampleBufferRef)sampleBuffer withType:(RPSampleBufferType)sampleBufferType API_AVAILABLE(ios(10.0));

/// 暂停镜像
- (void)paused;

/// 继续镜像
- (void)resumed;

/// 结束镜像
- (void)finished;

/// 向宿主发送心跳
- (void)sendHeartbeatToHostApp;

/// 设置水印图片，设置水印和遮罩只可二选一
/// location 起始位置
- (void)setterWatermarkImage:(UIImage *)image origin:(CGPoint)location;

/// 设置遮罩图，其它区域填补黑色，水印和遮罩只可二选一
/// - Parameters
///   - image:遮罩图片，nil为移除遮罩
///   - centralOffset: 图片默认中心显示，设置偏移量
- (void)setterOverlayImage:(UIImage *)image central:(CGPoint)centralOffset;

@end

NS_ASSUME_NONNULL_END
