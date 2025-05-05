@interface ECAPOPAuthScheme : ECAuthScheme
- (void)dealloc;
- (id)name;
- (id)humanReadableName;
- (unsigned int)applescriptScheme;
+ (id)allocWithZone:;
+ (id)apopAuthScheme;
@end
