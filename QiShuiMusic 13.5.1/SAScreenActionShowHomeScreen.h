@interface SAScreenActionShowHomeScreen : SABaseClientBoundCommand
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
+ (id)showHomeScreen;
+ (id)showHomeScreenWithDictionary:context:;
@end
