@interface BNSSOAuthBridge : NSObject
+ (BOOL)hasSSOAuthModel;
+ (id)authManager;
+ (void)requestSSOAuthExceptIntranet:schema:expiredTime:completionHandler:;
+ (void)resetAuthInfo;
+ (id)getUserInfo;
@end
