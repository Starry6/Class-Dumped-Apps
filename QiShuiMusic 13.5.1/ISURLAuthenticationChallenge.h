@interface ISURLAuthenticationChallenge : ISAuthenticationChallenge
- (id)password;
- (long long)failureCount;
- (id)sender;
- (BOOL)hasPassword;
- (id)user;
- (void)cancelAuthentication;
- (id)initWithAuthenticationChallenge:;
- (void)useCredential:;
+ (id)_messageForProtectionSpace:;
+ (id)_titleForProtectionSpace:;
@end
