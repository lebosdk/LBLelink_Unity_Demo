//
//  LBLelinkMirrorBase.h
//  LBReplayAppKit
//
//  Created by wangzhijun on 2021/3/16.
//  Copyright © 2021 深圳乐播科技有限公司. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/**
镜像方式
*/
typedef NS_OPTIONS(NSUInteger, LBLelinkMirrorStype) {
    LBLelinkMirrorStypeUnknown = 0,                // 未知方式
    LBLelinkMirrorStypeLANLelink = 1 << 0,         // 局域网乐联镜像方式
    LBLelinkMirrorStypeInternetYouMe = 1 << 1,        //互联网YouMe镜像方式
};

/// 云镜像开始重连通知
FOUNDATION_EXPORT NSNotificationName const LBCloudMirrorDidStartReconnectingNotification;
/// 云镜像重连成功通知
FOUNDATION_EXPORT NSNotificationName const LBCloudMirrorDidReconnectSuccessNotification;




NS_ASSUME_NONNULL_END
