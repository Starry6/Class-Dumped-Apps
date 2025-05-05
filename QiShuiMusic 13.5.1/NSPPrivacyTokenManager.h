@interface NSPPrivacyTokenManager : NSObject
- (void)fetchPrivacyTokensOnInterface:tierType:proxyURL:tokenVendor:tokenIssuancePublicKey:tokenCount:accessToken:retryAttempt:completionHandler:;
- (void)dealloc;
- (void)copyTokenInfo:;
- (void)fetchPrivateAccessTokenForChallenge:tokenKey:originNameKey:selectedOrigin:auditToken:bundleID:allowTools:accessToken:completionHandler:;
- (void)getTokenServerIPWithInterface:completionHandler:;
- (void).cxx_destruct;
- (BOOL)updateTokenFetchURL:accessTokenURL:accessTokenTypes:authenticationType:ignoreInvalidCerts:;
- (id)description;
- (id)tokenFetchURL;
+ (id)sharedTokenManager;
@end
