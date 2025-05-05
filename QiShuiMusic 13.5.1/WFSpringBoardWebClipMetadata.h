@interface WFSpringBoardWebClipMetadata : NSObject
@property (nonatomic) NSString shortcutIdentifier;
@property (nonatomic) NSString applicationIdentifier;
@property (nonatomic) BOOL appIsInstalled;
- (id)applicationIdentifier;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)shortcutIdentifier;
- (id)initWithShortcutIdentifier:applicationIdentifier:appIsInstalled:;
- (BOOL)appIsInstalled;
+ (BOOL)supportsSecureCoding;
@end
