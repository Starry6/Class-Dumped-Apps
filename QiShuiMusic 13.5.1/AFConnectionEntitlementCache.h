@interface AFConnectionEntitlementCache : NSObject
- (id)init;
- (void).cxx_destruct;
- (BOOL)hasEntitlement:forPID:;
- (void)cacheEntitlement:forPID:bundleID:;
+ (id)sharedCache;
@end
