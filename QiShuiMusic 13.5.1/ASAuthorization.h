@interface ASAuthorization : NSObject
@property (nonatomic) <ASAuthorizationProvider> provider;
@property (nonatomic) <ASAuthorizationCredential> credential;
- (id)init;
- (id)credential;
- (id)debugDescription;
- (id)provider;
- (void).cxx_destruct;
- (id)description;
- (id)initWithProvider:credential:;
- (id)initWithCorePlatformKeyCredentialAssertion:;
- (id)initWithCorePlatformKeyCredentialRegistration:;
+ (id)new;
+ (id)authorizationFromCredential:;
@end
