@interface VEInsertFramePlayer : NSObject
@property (nonatomic) {?=qiIq} lastFrameTime;
@property (nonatomic) {?=qiIq} srcFrameTime;
@property (nonatomic) ^{__CVBuffer=} srcPixelBuffer;
@property (nonatomic) double targetFps;
@property (nonatomic) double playLoopFreq;
- (id)getInsertedFrame;
- (BOOL)isInsertFrameNeeded:;
- (void)newPixelBuffer:frameTime:;
- (double)playLoopFreq;
- (void)setPlayLoopFreq:;
- (void)setSrcFrameTime:;
- (void)setSrcPixelBuffer:;
- (void)setTargetFps:;
- (id)srcFrameTime;
- (id)srcPixelBuffer;
- (id)init;
- (void)dealloc;
- (double)targetFps;
- (id)lastFrameTime;
- (void)setLastFrameTime:;
@end
