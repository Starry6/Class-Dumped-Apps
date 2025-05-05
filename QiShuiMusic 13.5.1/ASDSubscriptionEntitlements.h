@interface ASDSubscriptionEntitlements : NSObject
- (id)init;
- (void)dealloc;
- (void)getCachedSubscriptionEntitlementsForSegment:withResultHandler:;
- (void)setSubscriptionEntitlementsWithDictionary:forAccountID:segment:;
- (void)getAppStoreConsumedIntroOfferFamilyIdsWithResultHandler:;
- (void)setSubscriptionEntitlementsWithDictionary:forAccountID:;
- (void)getSubscriptionEntitlementsIgnoreCaches:forActiveAccountWithResultHandler:;
- (void)getSubscriptionEntitlementsForSegment:ignoreCaches:withCacheInfoResultHandler:;
- (id)_initWithServiceBroker:;
- (void).cxx_destruct;
- (void)getSubscriptionEntitlementsForSegment:ignoreCaches:requestingBundleId:withCacheInfoResultHandler:;
- (void)getSubscriptionEntitlementsForActiveAccountWithResultHandler:;
- (void)getSubscriptionEntitlementsForActiveAccountWithResultAndExpiryHandler:;
- (void)getSubscriptionEntitlementsForSegment:ignoreCaches:withResultHandler:;
+ (id)sharedInstance;
@end
