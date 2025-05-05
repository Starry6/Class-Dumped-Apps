@interface PSSSSubscriptionManagerInternal : NSObject
@property (nonatomic) VSSubscriptionRegistrationCenter registrationCenter;
- (id)init;
- (void)getActiveSubscriptionServicesMatchingBundleIdentifiers:domainIdentifiers:maximumExpirationLimit:completionHandler:;
- (void)setRegistrationCenter:;
- (id)registrationCenter;
- (void).cxx_destruct;
- (void)removeSubscriptionServiceForURL:;
- (void)removeWebSubscriptionServicesCreatedAfterDate:;
- (void)registerSubscriptionServiceForURL:withSubscriptionInfo:expirationDate:;
@end
