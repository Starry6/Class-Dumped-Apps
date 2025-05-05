@interface KryptonDefaultFrameService : NSObject
@property (nonatomic) CADisplayLink displayLink;
@property (nonatomic) BOOL isInBackground;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)onBootstrap:;
- (void)onDestroy;
- (void)onMainDisplay:;
- (void)requestPulse;
- (void)requestVSync:;
- (void)setIsInBackground:;
- (id)displayLink;
- (void)setDisplayLink:;
- (void)appWillEnterForeground:;
- (id)init;
- (void)dealloc;
- (void)appDidEnterBackground:;
- (void)setPreferredFramesPerSecond:;
- (BOOL)isInBackground;
- (void).cxx_destruct;
- (void)invalidate;
@end
