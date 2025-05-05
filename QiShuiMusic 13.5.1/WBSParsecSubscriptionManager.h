@interface WBSParsecSubscriptionManager : NSObject
@property (nonatomic) NSArray subscriptionDictionaries;
@property (nonatomic) BOOL needsUpdate;
- (id)init;
- (BOOL)needsUpdate;
- (void).cxx_destruct;
- (id)_init;
- (id)subscriptionDictionaries;
- (void)updateSubscriptionsWithBundleIdentifierWhitelist:domainWhitelist:maximumExpirationLimit:;
- (void)registerSubscriptionServiceForURL:withSubscriptionInfo:;
- (void)removeSubscriptionsAddedAfterDate:;
- (void)_updateThirdPartySubscriptionsWithBundleIdentifierWhitelist:domainWhitelist:maximumExpirationLimit:;
+ (id)sharedManager;
@end
