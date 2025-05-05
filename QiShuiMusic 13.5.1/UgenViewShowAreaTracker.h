@interface UgenViewShowAreaTracker : NSObject
@property (nonatomic) UgenTimer timer;
@property (nonatomic) NSMapTable weakCache;
@property (nonatomic) Q sequence;
@property (nonatomic) NSObject<OS_dispatch_semaphore> lock;
- (BOOL)checkViewValid:;
- (void)setWeakCache:;
- (void)stopAllTrack;
- (void)stopTrackWithSequence:;
- (void)trackWithView:showAreaBlock:;
- (double)visibleArea:;
- (double)visibleRatio:;
- (id)init;
- (void)setSequence:;
- (id)lock;
- (id)weakCache;
- (void)setTimer:;
- (void)_createTimer;
- (void).cxx_destruct;
- (id)timer;
- (void)_fire;
- (unsigned long long)sequence;
- (void)setLock:;
+ (id)sharedInstance;
@end
