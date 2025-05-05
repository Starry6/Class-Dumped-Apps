@interface ECCramMD5AuthScheme : ECAuthScheme
- (void)dealloc;
- (id)name;
- (id)humanReadableName;
- (unsigned int)applescriptScheme;
- (id)supportedSASLMechanisms;
+ (id)allocWithZone:;
+ (id)cramMD5AuthScheme;
@end
