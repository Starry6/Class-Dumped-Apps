@interface VSSubscriptionPredicateFactory : NSObject
@property (nonatomic) VSAppInstallationInfoCenter appInstallationInfoCenter;
- (id)_expressionByConvertingSubscriptionKeyPathInExpression:toAttributeKeysInEntity:;
- (id)_predicateTemplateForSourceKind:;
- (id)allowedSubscriptionSourcesPredicateForRequestKind:fromTask:;
- (id)_predicateTemplateForRequestKind:fromTask:;
- (id)_predicateTemplateForSourceOfTask:;
- (id)allowedSubscriptionsPredicateForRequestKind:fromTask:;
- (void).cxx_destruct;
- (id)_predicateTemplateForAppPredicate:withTask:;
- (void)setAppInstallationInfoCenter:;
- (id)_predicateTemplateForSourceIdentifier:;
- (id)predicateByConvertingSubscriptionKeyPathsInPredicate:toAttributeKeysInEntity:;
- (id)subscriptionFetchPredicateForTask:withOptions:;
- (id)appInstallationInfoCenter;
- (id)allowedSubscriptionsPredicateForTask:;
- (id)_topLevelAccessPredicateForRequestKind:fromTask:;
- (id)allowedSubscriptionSourceKindsPredicateForRequestKind:fromTask:;
+ (id)_subscriptionPredicateTemplateValues;
+ (id)_subscriptionSourcePredicateTemplateValues;
+ (id)_subscriptionSourceKindPredicateTemplateValues;
@end
