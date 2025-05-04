@interface AWEApplogDynamicFreqGeneralStrategy : AWEApplogDynamicFreqStrategy
@property (nonatomic) NSObject<OS_dispatch_source> timer;
@property (nonatomic) NSDate startTime;
@property (nonatomic) NSDate endTime;
@property (nonatomic) double timerPollInterval;
- (void)onStrategyInit;
- (id)initWithStrategyName:config:delegate:;
- (void)startTimerPolling;
- (double)timerPollInterval;
- (void)updateValidState;
- (void)setTimerPollInterval:;
- (void)setTimer:;
- (id)timer;
- (void)setStartTime:;
- (id)endTime;
- (void)setEndTime:;
- (id)description;
- (void).cxx_destruct;
- (id)startTime;
@end
