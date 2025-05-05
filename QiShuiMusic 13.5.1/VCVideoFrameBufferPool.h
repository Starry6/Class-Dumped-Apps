@interface VCVideoFrameBufferPool : NSObject
- (void)dealloc;
- (id)initWithCapacity:;
- (BOOL)addFrame:time:;
- (BOOL)releaseFrameWithTime:;
@end
