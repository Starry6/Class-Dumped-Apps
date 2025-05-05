@interface MFOAuth2TokenAuthScheme : ECAuthenticationScheme
- (id)name;
- (id)humanReadableName;
- (BOOL)canAuthenticateAccountClass:connection:;
- (Class)authenticatorClass;
- (id)authenticatorForAccount:connection:;
@end
