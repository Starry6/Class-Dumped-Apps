@interface AWEApplogDynamicFreqPredictExitStrategy : AWEApplogDynamicFreqStrategy
@property (nonatomic) @? cancelStrategyBlock;
@property (nonatomic) NSObject<OS_dispatch_source> timer;
@property (nonatomic) double strategyValidTimeInterval;
@property (nonatomic) double exitPredictScoreThreshold;
- (void)onStrategyInit;
- (id)initWithStrategyName:config:delegate:;
- (void)updateValidState:;
- (double)exitPredictScoreThreshold;
- (double)strategyValidTimeInterval;
- (void)setStrategyValidTimeInterval:;
- (void)setExitPredictScoreThreshold:;
- (id)cancelStrategyBlock;
- (void)setCancelStrategyBlock:;
- (void)setTimer:;
- (id)timer;
- (id)description;
- (void).cxx_destruct;
@end
