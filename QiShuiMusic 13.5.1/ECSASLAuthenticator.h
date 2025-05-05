@interface ECSASLAuthenticator : NSObject
@property (nonatomic) ECAuthenticationScheme authenticationScheme;
@property (nonatomic) <ECAuthenticatableAccount> account;
@property (nonatomic) NSString saslName;
@property (nonatomic) BOOL supportsInitialClientResponse;
@property (nonatomic) q authenticationState;
@property (nonatomic) BOOL justSentPlainTextPassword;
@property (nonatomic) <ECSASLSecurityLayer> securityLayer;
@property (nonatomic) BOOL usingSSL;
@property (nonatomic) BOOL usesBase64EncodeResponseData;
@property (nonatomic) BOOL couldRetry;
- (id)account;
- (void).cxx_destruct;
- (id)authenticationScheme;
- (id)securityLayer;
- (long long)authenticationState;
- (BOOL)usesBase64EncodeResponseData;
- (void)setMissingPasswordError;
- (id)responseForServerData:;
- (void)setAuthenticationState:;
- (id)saslName;
- (BOOL)supportsInitialClientResponse;
- (BOOL)justSentPlainTextPassword;
- (id)initWithAuthenticationScheme:account:connection:;
- (id)authScheme;
- (BOOL)isUsingSSL;
- (BOOL)couldRetry;
@end
