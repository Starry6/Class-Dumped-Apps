@interface FRCFrameInternalTimingInfo : NSObject
@property (nonatomic) {?=qiIq} presentationTimeStamp;
@property (nonatomic) {?=qiIq} frameDuration;
@property (nonatomic) {?=qiIq} interpolatedFrameDuration;
@property (nonatomic) q framesToBeDuplicated;
@property (nonatomic) q frameIsAtBigGap;
- (void)setPresentationTimeStamp:;
- (id)presentationTimeStamp;
- (id)frameDuration;
- (void)setFrameDuration:;
- (id)interpolatedFrameDuration;
- (void)setInterpolatedFrameDuration:;
- (long long)framesToBeDuplicated;
- (void)setFramesToBeDuplicated:;
- (long long)frameIsAtBigGap;
- (void)setFrameIsAtBigGap:;
@end
