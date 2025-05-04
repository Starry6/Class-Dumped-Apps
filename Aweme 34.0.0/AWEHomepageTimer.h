@interface AWEHomepageTimer : NSObject
@property (nonatomic) double timeInterval;
@property (nonatomic) NSTimer timer;
@property (nonatomic) NSHashTable observers;
- (id)initWithTimerInterval:;
- (void)tryLoadTimer;
- (void)p_tryUnloadTimerForCheckObservers;
- (void)p_callObservers;
- (void)tryUnloadTimer;
- (double)timeInterval;
- (void)setTimer:;
- (void)removeObserver:;
- (id)timer;
- (id)observers;
- (void)addObserver:;
- (void)setTimeInterval:;
- (void).cxx_destruct;
- (void)setObservers:;
- (void)onFire:;
+ (id)timerTimerInterval:;
@end
