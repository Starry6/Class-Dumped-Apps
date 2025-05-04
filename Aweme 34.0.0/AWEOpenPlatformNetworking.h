@interface AWEOpenPlatformNetworking : NSObject
+ (void)sendPOSTRequestWithDomain:urlPath:params:completion:;
+ (void)requestConfirmQRCodeWithParams:headerField:completion:;
+ (void)notifyQRCodeWithParams:completion:;
+ (void)requestGetClientScopesWithParams:completion:;
+ (void)sendPOSTRequestWithDomain:headerField:urlPath:params:responseCompletion:;
+ (void)sendGETRequestWithDomain:urlPath:params:completion:;
+ (void)requestGetAppLinkWithParams:completion:;
+ (void)requestRandomIdentityGet:completion:;
+ (void)requestAccountListWithParams:completion:;
@end
