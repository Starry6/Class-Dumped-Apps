@interface IESECSliceXTimer : NSObject
@property (nonatomic) NSObject<OS_dispatch_source> timer;
@property (nonatomic) NSHashTable timerListeners;
@property (nonatomic) double timeInterval;
- (void)addTimerListener:;
- (void)notifyTimerListeners;
- (void)removeTimerListener:;
- (void)setTimerListeners:;
- (id)timerListeners;
- (void)invalidateTimer;
- (void)dealloc;
- (void)applicationDidEnterBackground:;
- (void)setTimer:;
- (void)setTimeInterval:;
- (double)timeInterval;
- (id)initWithTimeInterval:;
- (void).cxx_destruct;
- (id)timer;
- (void)applicationWillEnterForeground:;
- (void)restartTimer;
@end
