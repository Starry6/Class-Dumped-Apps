@interface LynxVSyncPulse : NSObject
@property (nonatomic) CADisplayLink displayLink;
@property (nonatomic) BOOL isInBackground;
- (void)onMainDisplay:;
- (void)requestPulse;
- (void)setIsInBackground:;
- (id)displayLink;
- (void)setDisplayLink:;
- (void)appWillEnterForeground:;
- (void)dealloc;
- (void)appDidEnterBackground:;
- (BOOL)isInBackground;
- (void).cxx_destruct;
- (id)initWithCallback:;
- (void)invalidate;
- (id).cxx_construct;
@end
