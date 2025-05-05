@interface CSJViewShowAreaTracker : NSObject
@property (nonatomic) BUTimer timer;
@property (nonatomic) NSMapTable weakCache;
@property (nonatomic) NSObject<OS_dispatch_semaphore> lock;
- (void)setWeakCache:;
- (void)stopTrackWithView:;
- (void)trackWithView:showAreaBlock:;
- (id)init;
- (id)lock;
- (id)weakCache;
- (void)setTimer:;
- (void)_createTimer;
- (void).cxx_destruct;
- (id)timer;
- (void)_fire;
- (void)setLock:;
+ (id)sharedInstance;
@end
