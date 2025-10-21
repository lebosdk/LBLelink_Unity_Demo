//
//  LBSREncoder.h
//  LBSREncoder
//
//  Created by lbkj on 2019/12/19.
//  Copyright © 2019 深圳乐播科技有限公司. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreMedia/CoreMedia.h>

NS_ASSUME_NONNULL_BEGIN

//! Project version number for LBSREncoder.
FOUNDATION_EXPORT double LBSREncoderVersionNumber;

//! Project version string for LBSREncoder.
FOUNDATION_EXPORT const unsigned char LBSREncoderVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <LBSREncoder/PublicHeader.h>

@class LBSREncoder;
typedef struct config VideoEncodeConfig;
@protocol LBSREncoderDelegate <NSObject>
- (void)encoder:(LBSREncoder *)encoder onError:(NSError *)error;
- (void)encoder:(LBSREncoder *)encoder videoEncodedData:(NSData *)data isKeyFrame:(BOOL)isKeyFrame;
/// 视频首帧编码完成
- (void)encoder:(LBSREncoder *)encoder videoFirstFrameEncodingCompleted:(BOOL)successfully encoderDuration:(long)duration;
- (void)encoder:(LBSREncoder *)encoder resetEncoder:(BOOL)resetEncoder;
- (void)encoder:(LBSREncoder *)encoder audioEncodedData:(NSData *)data;

// fairplay delegate ,未添加128头的数据
- (void)encoder:(LBSREncoder *)encoder sps:(NSData *_Nonnull)sps pps:(NSData *_Nonnull)pps recSize:(CGSize)recSize encodeTakeupTime:(long)takeupTime;
- (void)encoder:(LBSREncoder *)encoder encodedData:(NSData *_Nonnull)data isKeyFrame:(BOOL)isKeyFrame recSize:(CGSize)size encodeTakeupTime:(long)takeupTime;

@optional

@end

@interface LBSREncoder : NSObject

@property (nonatomic, weak) id<LBSREncoderDelegate> delegate;
@property (nonatomic, assign)BOOL isFairplay;

- (void)stopEncoder;

- (void)encodeWithVideoPixelBuffer:(CVPixelBufferRef)pixelBuf orientation:(NSNumber *)orientation;
- (void)sendVideoOfFluency:(BOOL)isFluency;  // 传送视频流是否流畅
- (void)passNumberOfBlockedData:(NSUInteger)count;
- (void)distroyVideoEncoder;

- (void)updateVideoFps:(SInt32)fps;
- (BOOL)updateEncodeBitrate:(SInt32)bitrate;
- (void)updateVideoKeyFrameAesKey:(NSString *)keyFrameAesKey;
- (void)encodeAudioAppPcmData:(char *_Nonnull)pcmData length:(size_t)pcmLength  audioChannels:(UInt32)audioChannels;

- (void)encodeVideoWithSampleBuffer:(CMSampleBufferRef _Nonnull)sampleBuffer;
- (void)encodeAudioWithSampleBuffer:(CMSampleBufferRef _Nonnull)sampleBuffer;

- (void)enableSaveVideo:(BOOL)enable;
- (void)dropFrameCount;
- (BOOL)shouldDropFrame:(NSUInteger)frameCount;
- (BOOL)isIPadOrLowerIphone7;

// 重置编码配置
- (BOOL)setupVideoEncodeConfig:(VideoEncodeConfig)config;
- (void)setupVideoFps:(NSInteger)fps;

#pragma mark - 获取一些参数
- (NSInteger)videoFps;   // 视频帧率
- (NSInteger)videoFrameWidth;  // 分辨率宽
- (NSInteger)videoFrameHeight;  // 分辨率高
- (CGFloat)videoEncodeQuality; // 视频编码类型
- (NSInteger)videoEncodeRate;
- (NSInteger)videoMaxBitrate;
- (NSInteger)videoMinBitrate;
- (unsigned short)getAudioSnAddOne:(BOOL)isAdd;
@end

NS_ASSUME_NONNULL_END
