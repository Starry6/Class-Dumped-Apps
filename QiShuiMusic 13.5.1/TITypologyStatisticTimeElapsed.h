@interface TITypologyStatisticTimeElapsed : TITypologyStatistic
@property (nonatomic) TITypologyTimer timer;
@property (nonatomic) TITypologyTimer adjustedTimer;
@property (nonatomic) double elapsedTime;
@property (nonatomic) double adjustedElapsedTime;
- (id)init;
- (void)setAdjustedTimer:;
- (double)elapsedTime;
- (id)adjustedTimer;
- (double)adjustedElapsedTime;
- (void)visitRecordKeyboardInput:;
- (void)setTimer:;
- (id)structuredReport;
- (id)aggregateReport;
- (void).cxx_destruct;
- (id)timer;
@end
