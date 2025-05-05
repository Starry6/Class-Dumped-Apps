@interface NWPVarBandit : NWPVar
@property (nonatomic) SFCache uuidCache;
@property (nonatomic) NSMutableDictionary lastSampleRewards;
- (void).cxx_destruct;
- (BOOL)setInitialValue:;
- (id)initInValueSpace:withLabel:;
- (BOOL)selectModel:;
- (id)predictValueGivenContext:generationId:;
- (BOOL)setReward:onValue:forPredictionGenerationId:;
- (void)_defaultModelInit;
- (id)initInNumRangeFrom:to:stride:withLabel:;
- (id)_epsilongreedy_predictValueGivenContext:;
- (id)_ucb_predictValueGivenContext:;
- (id)uuidCache;
- (void)setUuidCache:;
- (id)lastSampleRewards;
- (void)setLastSampleRewards:;
@end
