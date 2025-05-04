@interface AWEAntiAddictThresholdRule : NSObject
- (BOOL)satisfiedWithStrategyModel:curIndex:useDuration:fatigue:atDate:;
+ (id)sharedRule;
+ (BOOL)satisfiedWithStrategyModel:useDuration:fatigue:atDate:;
@end
