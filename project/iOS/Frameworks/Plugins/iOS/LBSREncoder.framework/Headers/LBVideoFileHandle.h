//
//  LBVidelFileHandle.h
//  LBSREncoder
//
//  Created by lbkj on 2020/3/17.
//  Copyright © 2020 深圳乐播科技有限公司. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface LBVideoFileHandle : NSObject
// 填充SPS和PPS数据
- (void)gotSpsPps:(NSData *)sps pps:(NSData *)pps;

// 填充NALU数据
- (void)gotEncodeData:(NSData *)data;

// 发送的数据
- (void)gotSendData:(NSData *)data;

- (void)createFileHandle;

- (void)createDataFileHandle;

@end
