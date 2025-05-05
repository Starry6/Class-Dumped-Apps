@interface VideoFrameWriterElement : NSObject
@property (nonatomic) ^{__CVBuffer=} pixelBuffer;
@property (nonatomic) {?=qiIq} frameTime;
@property (nonatomic) q frameNumber;
- (void)dealloc;
- (id)pixelBuffer;
- (long long)frameNumber;
- (void)setPixelBuffer:;
- (id)frameTime;
- (void)setFrameTime:;
- (void)setFrameNumber:;
- (void)DeallocPixBuffer;
@end
