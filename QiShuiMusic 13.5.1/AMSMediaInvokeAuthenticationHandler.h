@interface AMSMediaInvokeAuthenticationHandler : NSObject
+ (id)performAuthFromResponse:taskInfo:;
+ (id)_presentAuthRequest:taskInfo:;
+ (BOOL)isInvokeAuthenticationEnabled;
+ (unsigned long long)_authenticationTypeForResponse:;
+ (id)_authenticateRequestWithAuthType:taskInfo:;
+ (id)_performAuthRequest:redirectURL:taskInfo:;
@end
