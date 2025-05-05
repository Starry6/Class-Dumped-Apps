@interface ECDigestMD5AuthScheme : ECAuthScheme
- (void)dealloc;
- (id)name;
- (id)humanReadableName;
- (unsigned int)applescriptScheme;
- (id)supportedSASLMechanisms;
+ (id)allocWithZone:;
+ (id)digestMD5AuthScheme;
@end
