@interface MFDigestMD5AuthScheme : ECAuthenticationScheme
- (id)name;
- (id)humanReadableName;
- (BOOL)canAuthenticateAccountClass:connection:;
- (Class)authenticatorClass;
- (BOOL)hasEncryption;
@end
