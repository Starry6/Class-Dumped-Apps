@interface CKProcessScopedStateManager : NSObject
- (void)handleSignificantIssueBehavior:reason:;
- (void)noteSystemIsAvailable;
- (void)connectionBecameInvalid:;
- (void)clearFakeEntitlementForKey:;
- (id)untrustedEntitlements;
- (void).cxx_destruct;
- (void)getFileMetadataWithFileHandle:openInfo:reply:;
- (void)setFakeEntitlement:forKey:;
+ (id)sharedManager;
@end
