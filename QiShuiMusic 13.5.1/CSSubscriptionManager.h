@interface CSSubscriptionManager : NSObject
- (id)init;
- (void)registerSubscriptionWithInfo:expirationDate:;
- (void).cxx_destruct;
- (void)unregisterSubscriptionWithInfo:;
- (void)unregisterAllSubscriptions;
+ (id)sharedManager;
@end
