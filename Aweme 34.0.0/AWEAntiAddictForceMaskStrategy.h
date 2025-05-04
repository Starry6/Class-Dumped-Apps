@interface AWEAntiAddictForceMaskStrategy : NSObject
@property (nonatomic) q satisfiedStrategyIndex;
@property (nonatomic) <AWEAntiAddictStrategyThresholdUnitProtocol> satisfiedStrategy;
@property (nonatomic) NSString strategyName;
@property (nonatomic) q triggerType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)satisfiedWithPreparedData:;
- (id)getActionWithPreparedData:;
- (long long)satisfiedStrategyIndex;
- (id)satisfiedStrategy;
- (void)setSatisfiedStrategyIndex:;
- (void)setSatisfiedStrategy:;
- (id)init;
- (void).cxx_destruct;
- (long long)triggerType;
- (id)strategyName;
@end
