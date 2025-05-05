@interface SASetSupportedLocales : SABaseClientBoundCommand
@property (nonatomic) NSArray locales;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)locales;
- (void)setLocales:;
+ (id)setSupportedLocales;
+ (id)setSupportedLocalesWithDictionary:context:;
@end
