@interface VSSubscriptionFetchOptionsValidator : NSObject
@property (nonatomic) VSSubscriptionPredicateFactory predicateFactory;
- (id)subscriptionFetchOptionsAllowedForSecurityTask:;
- (id)standardizedFetchOptionsFromOptions:withSecurityTask:;
- (id)predicateFactory;
- (void).cxx_destruct;
- (void)setPredicateFactory:;
@end
