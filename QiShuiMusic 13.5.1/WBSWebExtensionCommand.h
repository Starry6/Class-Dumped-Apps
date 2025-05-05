@interface WBSWebExtensionCommand : NSObject
@property (nonatomic) NSString commandName;
@property (nonatomic) NSString commandDescription;
@property (nonatomic) NSString shortcut;
@property (nonatomic) NSString extensionComposedIdentifier;
@property (nonatomic) UIKeyCommand keyCommand;
- (id)keyCommand;
- (void).cxx_destruct;
- (id)description;
- (id)shortcut;
- (id)commandDescription;
- (id)initWithProperties:extensionComposedIdentifier:outErrorMessage:;
- (void)_parseShortcut:;
- (id)commandName;
- (id)extensionComposedIdentifier;
@end
