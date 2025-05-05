@interface ECOAuth2AuthScheme : ECAuthScheme
- (void)dealloc;
- (BOOL)requiresUsername;
- (BOOL)requiresPassword;
- (id)name;
- (id)humanReadableName;
- (unsigned int)applescriptScheme;
- (id)supportedSASLMechanisms;
+ (id)allocWithZone:;
+ (id)oauth2AuthScheme;
@end
