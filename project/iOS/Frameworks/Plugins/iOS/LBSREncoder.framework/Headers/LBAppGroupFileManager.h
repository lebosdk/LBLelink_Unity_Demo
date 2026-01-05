//
//  LBAppGroupFileManager.h
//  LBReplayKit
//
//  Created by lbkj on 2019/11/22.
//  Copyright © 2019 深圳乐播科技有限公司. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface LBAppGroupFileManager : NSObject
+ (instancetype)defaultManager;

- (void)setAppGroupId:(NSString *)appGroupId;
- (NSString *)getAppGroupId;
- (NSURL *)appGroupURLForMirrorDeviceListFile;
- (NSURL *)appGroupURLForMirrorDeviceStatusFile;

- (NSURL *)appGroupURLForVideo;
- (NSURL *)appGroupURLForAudio;
- (NSURL *)appGroupURLForMirrorDevice;

- (NSString *)appGroupPathForVideo;
- (NSString *)appGroupPathForAudio;

- (NSURL *)createGroupURLForVideo;
- (NSURL *)createGroupURLForAudio;
- (NSURL *)createGroupURLForMirrorDevice;

- (void)cleanGroupURLDir;
@end

NS_ASSUME_NONNULL_END
