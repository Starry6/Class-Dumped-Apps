@interface SFExternalCredentialIdentityStoreManager : NSObject
- (id)init;
- (void).cxx_destruct;
- (void)getCredentialIdentityStoreWithIdentifier:completion:;
- (id)_credentialIdentityStoreWithIdentifier:;
- (void)removeCredentialIdentityStoreWithIdentifier:completion:;
+ (id)sharedManager;
@end
