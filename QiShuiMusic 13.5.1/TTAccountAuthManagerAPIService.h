@interface TTAccountAuthManagerAPIService : NSObject
+ (id)getAccessTokenWithAuthCode:authPlatform:extraParams:completion:;
+ (id)authChangeBindWithRequestModel:trackParams:completion:;
+ (id)authLoginAuthorizeWithCompletion:;
+ (void)getHostMobileOneAuthTicketWithThirdPartyAid:clientKey:trackParams:completion:;
+ (void)getOAuthTokenWithAuthPlatform:trackParams:completion:;
+ (void)getOpenTokenInfoWithAuthPlatform:accessToken:trackParams:completion:;
+ (void)updateAuthorizeInfoWithAuthPlatform:authResponse:trackParams:completion:;
@end
