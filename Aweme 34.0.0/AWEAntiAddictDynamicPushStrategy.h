@interface AWEAntiAddictDynamicPushStrategy : AWEAntiAddictPushStrategy
- (BOOL)satisfiedWithPreparedData:;
- (id)getActionWithPreparedData:;
- (BOOL)isCurrentUserAgeStageInSet:;
- (id)strategyName;
+ (id)moduleName;
@end
