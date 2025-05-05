@interface PLSecurity : NSObject
+ (BOOL)isEntitledForPhotoKitOrPrivatePhotosTCCForToken:;
+ (BOOL)auditToken:hasEntitlement:;
+ (BOOL)hasXPCStoreEntitlementOptInForToken:;
+ (id)_secTask:grantedEntitlements:;
+ (BOOL)secTask:hasEntitlement:;
+ (id)connection:valueForEntitlement:;
+ (BOOL)connection:hasEntitlement:;
+ (BOOL)connectionIsEntitledForPhotoKit:;
+ (id)connection:valuesForEntitlements:;
+ (BOOL)isEntitledForPhotoKit;
+ (id)connection:grantedEntitlements:;
+ (BOOL)containsPhotoKitEntitlement:;
@end
