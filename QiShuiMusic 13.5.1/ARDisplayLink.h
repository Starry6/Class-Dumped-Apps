@interface ARDisplayLink : NSObject
@property (nonatomic) q preferredFramesPerSecond;
@property (nonatomic) double vsyncOffset;
@property (nonatomic) ARRunLoop runloop;
- (id)runloop;
- (id)init;
- (void)dealloc;
- (void)setPreferredFramesPerSecond:;
- (long long)preferredFramesPerSecond;
- (void).cxx_destruct;
- (void)invalidate;
- (double)vsyncOffset;
- (void)setVsyncOffset:;
- (id)initWithPreferredFramesPerSecond:callback:;
- (void)_recomputeActualVsyncOffsetWithVsyncOffset:preferredFramesPerSecond:;
- (void)displayLinkCallback;
@end
