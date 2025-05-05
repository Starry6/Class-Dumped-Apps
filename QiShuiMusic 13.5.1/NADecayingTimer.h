@interface NADecayingTimer : NSObject
@property (nonatomic) NSDate referenceDate;
@property (nonatomic) Q minimumUnit;
@property (nonatomic) @? block;
@property (nonatomic) NSTimer timer;
- (id)block;
- (void)dealloc;
- (void)setTimer:;
- (void).cxx_destruct;
- (id)timer;
- (id)referenceDate;
- (void)invalidate;
- (unsigned long long)minimumUnit;
- (id)_nextFireDate;
- (id)initWithReferenceDate:minimumUnit:block:;
- (void)_scheduleNextTimer;
- (void)_timerEvent;
- (unsigned long long)_mostSignificantUnitForDateComponents:;
+ (id)scheduledTimerWithReferenceDate:minimumUnit:block:;
@end
