@interface SAScreenActionActivateUIElement : SABaseClientBoundCommand
@property (nonatomic) NSString elementId;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)elementId;
- (void)setElementId:;
+ (id)activateUIElement;
+ (id)activateUIElementWithDictionary:context:;
@end
