@interface MFNewcastleAuthScheme : ECAuthenticationScheme
- (BOOL)requiresPassword;
- (id)name;
- (id)humanReadableName;
- (BOOL)canAuthenticateAccountClass:connection:;
- (Class)authenticatorClass;
@end
