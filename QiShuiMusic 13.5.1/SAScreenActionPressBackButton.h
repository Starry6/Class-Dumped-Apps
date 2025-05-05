@interface SAScreenActionPressBackButton : SABaseClientBoundCommand
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
+ (id)pressBackButton;
+ (id)pressBackButtonWithDictionary:context:;
@end
