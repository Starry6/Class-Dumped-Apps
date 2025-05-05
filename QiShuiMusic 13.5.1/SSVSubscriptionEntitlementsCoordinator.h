@interface SSVSubscriptionEntitlementsCoordinator : NSObject
- (id)_connection;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)getSubscriptionEntitlements:;
- (void)getSubscriptionEntitlementsIgnoreCaches:entitlementsBlock:;
- (id)_cachedSubscriptionEntitlements;
- (id)_loadSubscriptionEntitlementsIgnoreCaches:error:;
- (void)_setCachedSubscriptionEntitlements:;
+ (id)sharedCoordinator;
@end
