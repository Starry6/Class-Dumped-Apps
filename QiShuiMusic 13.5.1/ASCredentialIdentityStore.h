@interface ASCredentialIdentityStore : NSObject
- (void).cxx_destruct;
- (void)saveCredentialIdentities:completion:;
- (void)removeCredentialIdentities:completion:;
- (void)removeAllCredentialIdentitiesWithCompletion:;
- (void)replaceCredentialIdentitiesWithIdentities:completion:;
- (id)_initCredentialIdentityStore;
- (void)getCredentialIdentityStoreStateWithCompletion:;
+ (id)sharedStore;
@end
