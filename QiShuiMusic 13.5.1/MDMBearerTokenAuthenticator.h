@interface MDMBearerTokenAuthenticator : NSObject
@property (nonatomic) NSString token;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)token;
- (void)setToken:;
- (void).cxx_destruct;
- (id)initWithTokens:;
- (BOOL)authenticateRequest:error:;
- (id)initWithRMAccountID:;
- (BOOL)validAuthParams:;
- (BOOL)doesWebAuthentication;
- (BOOL)canRefreshToken;
- (id)prepareForReauthenticationWithAuthParams:accountID:error:;
- (id)webAuthenticationURLForAuthParams:userIdentifier:;
- (void)authTokensWithCallbackURL:authParams:completionHandler:;
+ (id)authenticationMethod;
+ (id)_createAuthInvalidError;
@end
