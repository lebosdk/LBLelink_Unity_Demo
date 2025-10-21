//
//  SampleHandler.m
//  capture
//
//  Created by guogt on 2025/4/28.
//


#import "SampleHandler.h"
#import <LBReplayKitExtension/LBReplayKitExtension.h>

@interface SampleHandler ()<LBLelinkMirrorExtensionDelegate>

@end


@implementation SampleHandler

- (void)broadcastStartedWithSetupInfo:(NSDictionary<NSString *,NSObject *> *)setupInfo {
    // User has requested to start the broadcast. Setup info from the UI extension can be supplied but optional.
    NSString *appGroupId = @"group.com.hpplay.HPPlayTVBCExtension";
    [LBLelinkMirrorExtension sharedInstance].delegate = self;
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

- (void)hostAppStopPush {
    NSLog(@"App 主动停止镜像");
    [self stopWithMessage:@"APP停止镜像！"];
}

@end
