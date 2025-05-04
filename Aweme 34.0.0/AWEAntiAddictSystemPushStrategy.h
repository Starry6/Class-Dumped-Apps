@interface AWEAntiAddictSystemPushStrategy : AWEAntiAddictPushStrategy
@property (nonatomic) q satisfiedStrategyIndex;
@property (nonatomic) AWEAntiAddictStrategyThresholdUnitModel satisfiedStrategy;
- (BOOL)satisfiedWithPreparedData:;
- (id)getActionWithPreparedData:;
- (long long)satisfiedStrategyIndex;
- (id)satisfiedStrategy;
- (void)setSatisfiedStrategyIndex:;
- (void)setSatisfiedStrategy:;
- (void).cxx_destruct;
- (id)strategyName;
+ (id)moduleName;
@end
