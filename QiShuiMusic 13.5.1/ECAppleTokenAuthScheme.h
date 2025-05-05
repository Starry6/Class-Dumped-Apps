@interface ECAppleTokenAuthScheme : ECAuthScheme
- (void)dealloc;
- (BOOL)requiresUsername;
- (BOOL)requiresPassword;
- (id)name;
- (id)humanReadableName;
- (unsigned int)applescriptScheme;
- (id)supportedSASLMechanisms;
+ (id)allocWithZone:;
+ (id)appleTokenAuthScheme;
@end
