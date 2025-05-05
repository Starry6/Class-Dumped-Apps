@interface PLAssetsdServicePermissions : NSObject
@property (nonatomic) q requiredAuthorization;
@property (nonatomic) BOOL allowsAuthorizationWithPhotoKitEntitlement;
@property (nonatomic) NSArray requiredEntitlements;
- (id)requiredEntitlements;
- (void)setRequiredEntitlements:;
- (void)setRequiredAuthorization:;
- (BOOL)_isAuthorizedForReadWriteWithContext:;
- (id)_verifyEntitlementsWithContext:;
- (BOOL)_isAuthorizedViaPhotoKitEntitlementWithContext:;
- (BOOL)_isAuthorizedForWriteOnlyWithContext:;
- (BOOL)allowsAuthorizationWithPhotoKitEntitlement;
- (void).cxx_destruct;
- (id)verifyPermissionsWithContext:;
- (void)setAllowsAuthorizationWithPhotoKitEntitlement:;
- (BOOL)_isAuthorizedViaTCCWithContext:;
- (id)_errorForMissingEntitlements:withContext:;
- (long long)requiredAuthorization;
- (void)refreshCachedAuthorizationsWithContext:;
- (id)initWithPermissions:;
- (id)_verifyAuthorizationWithContext:;
- (id)copyWithZone:;
@end
