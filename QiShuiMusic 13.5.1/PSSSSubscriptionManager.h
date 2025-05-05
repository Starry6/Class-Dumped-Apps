@interface PSSSSubscriptionManager : NSObject
@property (nonatomic) VSSubscriptionRegistrationCenter registrationCenter;
- (id)init;
- (void)setRegistrationCenter:;
- (id)registrationCenter;
- (void)registerSubscriptionWithInfo:expirationDate:;
- (void).cxx_destruct;
- (void)unregisterSubscriptionWithInfo:;
- (void)unregisterAllSubscriptions;
@end
