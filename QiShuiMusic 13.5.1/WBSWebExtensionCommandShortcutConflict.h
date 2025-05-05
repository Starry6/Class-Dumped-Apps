@interface WBSWebExtensionCommandShortcutConflict : NSObject
@property (nonatomic) NSString shortcut;
@property (nonatomic) NSString extensionDisplayName;
@property (nonatomic) NSString extensionDisplayShortName;
- (void).cxx_destruct;
- (id)description;
- (id)shortcut;
- (id)extensionDisplayName;
- (id)extensionDisplayShortName;
- (id)initWithShortcut:extensionDisplayName:extensionDisplayShortName:;
@end
