@interface INExplicitAppTrustCache : NSObject
@property (nonatomic) BOOL enterpriseAppTrustAllowed;
@property (nonatomic) NSArray managedBundleIdentifiers;
@property (nonatomic) NSArray trustedCodeSigningIdentities;
@property (nonatomic) NSSet signingIdentitiesRequiringExplicitTrust;
- (void)setTrustedCodeSigningIdentities:;
- (void).cxx_destruct;
- (id)trustedCodeSigningIdentities;
- (BOOL)enterpriseAppTrustAllowed;
- (id)managedBundleIdentifiers;
- (id)signingIdentitiesRequiringExplicitTrust;
- (void)setEnterpriseAppTrustAllowed:;
- (void)setManagedBundleIdentifiers:;
- (void)setSigningIdentitiesRequiringExplicitTrust:;
@end
