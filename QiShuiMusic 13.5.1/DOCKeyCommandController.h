@interface DOCKeyCommandController : NSObject
- (id)_menuDefinition;
- (id)_menuOrder;
- (id)_unwantedMenuIdentifiers;
- (id)_menuTitleForCustomMenuWithIdentifier:;
- (void)buildWithBuilder:;
- (id)allKeyCommands;
- (id)allKeyCommandsWithAction:;
+ (id)cancellingKeyCommandsWithAction:;
+ (id)dismissingKeyCommandsWithAction:;
@end
