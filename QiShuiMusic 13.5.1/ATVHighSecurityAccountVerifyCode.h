@interface ATVHighSecurityAccountVerifyCode : ATVHighSecurityAccountSendCode
- (id)urlString;
- (id)urlRequest;
- (void).cxx_destruct;
- (id)initWithAccount:device:hsaCode:;
+ (Class)responseClass;
@end
