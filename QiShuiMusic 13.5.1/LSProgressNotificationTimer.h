@interface LSProgressNotificationTimer : NSObject
@property (nonatomic) NSTimer timer;
@property (nonatomic) NSDate lastFiredDate;
@property (nonatomic) NSMutableSet applications;
@property (nonatomic) double minInterval;
@property (nonatomic) double latency;
@property (nonatomic) : appObserverSelector;
- (double)latency;
- (void)removeApplication:;
- (void)stopTimer;
- (void)dealloc;
- (void)sendMessage:;
- (void)setApplications:;
- (id)applications;
- (void)setTimer:;
- (void)clear;
- (void).cxx_destruct;
- (void)addApplication:;
- (id)timer;
- (id)description;
- (id)initWithQueue:;
- (void)notifyObservers:withApplications:;
- (id)lastFiredDate;
- (void)setLastFiredDate:;
- (double)minInterval;
- (SEL)appObserverSelector;
- (void)setAppObserverSelector:;
@end
