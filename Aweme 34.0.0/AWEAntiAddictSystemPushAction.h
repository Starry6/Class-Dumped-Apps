@interface AWEAntiAddictSystemPushAction : AWEAntiAddictPushAction
@property (nonatomic) q satisfiedStrategyIndex;
@property (nonatomic) AWEAntiAddictStrategyThresholdUnitModel satisfiedStrategy;
- (id)updatedDataOnBegin;
- (long long)satisfiedStrategyIndex;
- (id)satisfiedStrategy;
- (void)setSatisfiedStrategyIndex:;
- (void)setSatisfiedStrategy:;
- (void)begin;
- (void).cxx_destruct;
+ (id)moduleName;
@end
