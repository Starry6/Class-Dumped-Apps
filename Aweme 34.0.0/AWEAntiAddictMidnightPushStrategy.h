@interface AWEAntiAddictMidnightPushStrategy : AWEAntiAddictPushStrategy
- (BOOL)satisfiedWithPreparedData:;
- (id)getActionWithPreparedData:;
- (id)strategyName;
+ (id)moduleName;
@end
