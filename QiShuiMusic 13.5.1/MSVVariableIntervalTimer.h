@interface MSVVariableIntervalTimer : NSObject
@property (nonatomic) double currentInterval;
@property (nonatomic) double timeUntilNextInterval;
@property (nonatomic) NSArray remainingIntervals;
@property (nonatomic) BOOL valid;
- (double)currentInterval;
- (BOOL)isValid;
- (void).cxx_destruct;
- (id)remainingIntervals;
- (double)timeUntilNextInterval;
- (id)initWithIntervals:name:queue:block:;
- (void)_processTimerEventWithQueue:block:;
@end
