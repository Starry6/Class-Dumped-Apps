@interface MDMAuthenticationHelper : NSObject
+ (unsigned long long)enrollmentMethodFromAuthenticateString:outParams:;
+ (void)performExchangeMAIDForBearerTokenAtURL:rmAccountIdentifier:anchorCertificateRefs:completionHandler:;
@end
