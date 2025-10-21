//
//  LBMirrorExtension.h
//  LBReplayKitExtension
//
//  Created by lbkj on 2019/11/22.
//  Copyright © 2019 深圳乐播科技有限公司. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreMedia/CoreMedia.h>
#import <CoreVideo/CoreVideo.h>
#import <ReplayKit/ReplayKit.h>
@class LBMirrorExtension;
@class LBLelinkService;

NS_ASSUME_NONNULL_BEGIN

@protocol LBMirrorExtensionDelegate <NSObject>

@optional
- (void)hostAppResponseWithStarted:(BOOL)started;
- (void)hostAppStartPush;
- (void)hostAppStopPush;
- (void)lelinkMirrorError:(NSError *)error;
- (void)lelinkMirrorSuccessed;
- (void)lelinkHostAppReceiveHearbeat;
- (void)hostAppForceStopMirror;

- (void)lelinkMirrorExtension:(LBMirrorExtension *)extention preMirrorToDevice:(LBLelinkService *)lelinkService;

- (void)lelinkMirrorExtension:(LBMirrorExtension *)extention disConnectToDevice:(LBLelinkService *)lelinkService;

- (void)lelinkMirrorExtensionTurnToYoumeMirror;

- (void)lelinkMirrorVideoConfigDidChanged;

@end

@interface LBMirrorExtension : NSObject
@property(weak, nonatomic) id<LBMirrorExtensionDelegate> delegate;
@property (nonatomic, assign, readonly) BOOL connectd;

+ (instancetype)sharedInstance;

- (void)setAppGroupId:(NSString *)appGroupId;

- (void)startMirror;
- (void)stopMirror;

// 设置视频帧率
- (void)setupVideoFps:(NSUInteger)fps;
- (void)setupVideoFps:(NSUInteger)fps bitrate:(NSInteger)bitrate maxBitrate:(NSInteger)maxBitrate minBitrate:(NSInteger)minBitrate frameWidth:(NSInteger)frameWidth frameHeight:(NSInteger)frameHeight;

- (void)processSampleBuffer:(CMSampleBufferRef)sampleBuffer withType:(RPSampleBufferType)sampleBufferType API_AVAILABLE(ios(10.0));

- (void)paused;
- (void)resumed;
- (void)finished;
- (void)videoCallback;
- (void)audioCallback;
- (void)audioMicCallback;

- (BOOL)isMirrored;

- (void)disconnectLelinkMirror;
- (void)broadcastSendHeartbeatToApp;

@end

NS_ASSUME_NONNULL_END
