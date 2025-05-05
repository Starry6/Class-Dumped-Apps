@interface VEInsertFrameReader : NSObject
@property (nonatomic) ^{opaqueCMSampleBuffer=} lastBuffer;
@property (nonatomic) {?=qiIq} lastFrameTime;
@property (nonatomic) q insertFrameCount;
@property (nonatomic) double targetFps;
- (id)getInsertFrameWithSampleBuffer:;
- (void)calculateFrameCountWithTimeStamp:;
- (void)calculateFrameCountWithTimeStamp:readerComplete:;
- (long long)insertFrameCount;
- (void)setInsertFrameCount:;
- (void)setTargetFps:;
- (id)init;
- (void)dealloc;
- (double)targetFps;
- (id)lastFrameTime;
- (void)setLastFrameTime:;
- (id)lastBuffer;
- (void)setLastBuffer:;
@end
