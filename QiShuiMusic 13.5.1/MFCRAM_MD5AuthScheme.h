@interface MFCRAM_MD5AuthScheme : ECAuthenticationScheme
- (id)name;
- (id)humanReadableName;
- (BOOL)canAuthenticateAccountClass:connection:;
- (Class)authenticatorClass;
- (BOOL)sendsPlainTextPasswords;
- (BOOL)hasEncryption;
@end
