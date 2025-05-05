@interface HLDisplayLink : NSObject
@property (nonatomic) NSRunLoop runLoop;
@property (nonatomic) q maxFPS;
- (long long)maxFPS;
- (void)setMaxFPS:;
- (void)setPreferredFramesPerSecond:;
- (void)setPaused:;
- (void).cxx_destruct;
- (void)setRunLoop:;
- (id)runLoop;
- (void)invalidate;
- (void)setTarget:selector:;
@end
