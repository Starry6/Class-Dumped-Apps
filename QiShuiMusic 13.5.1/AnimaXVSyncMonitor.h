@interface AnimaXVSyncMonitor : NSObject
@property (nonatomic) CADisplayLink displayLink;
@property (nonatomic) BOOL isInBackground;
- (void)requestVSync:;
- (void)setIsInBackground:;
- (id)displayLink;
- (void)setDisplayLink:;
- (void)appWillEnterForeground:;
- (id)init;
- (void)dealloc;
- (void)appDidEnterBackground:;
- (BOOL)isInBackground;
- (void).cxx_destruct;
- (void)invalidate;
- (void)displayLinkCallback:;
@end
