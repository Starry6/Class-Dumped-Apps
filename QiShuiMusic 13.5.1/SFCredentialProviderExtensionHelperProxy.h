@interface SFCredentialProviderExtensionHelperProxy : NSObject
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)invalidate;
- (id)_proxyObject;
- (void)fetchCredentialIdentitiesMatchingDomains:completion:;
- (void)getCredentialProviderExtensionStateWithCompletion:;
- (void)saveCredentialIdentities:completion:;
- (void)removeCredentialIdentities:completion:;
- (void)removeAllCredentialIdentitiesWithCompletion:;
- (void)replaceCredentialIdentitiesWithIdentities:completion:;
- (void)removeCredentialIdentityStoreForApplication:completion:;
@end
