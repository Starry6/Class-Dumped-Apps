@interface MFNTLMAuthScheme : ECAuthenticationScheme
- (id)name;
- (id)humanReadableName;
- (Class)authenticatorClass;
- (BOOL)sendsPlainTextPasswords;
- (BOOL)hasEncryption;
@end
