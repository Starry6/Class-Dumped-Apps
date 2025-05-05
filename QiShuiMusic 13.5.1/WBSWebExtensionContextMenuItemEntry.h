@interface WBSWebExtensionContextMenuItemEntry : NSObject
@property (nonatomic) NSObject<NSCopying> identifier;
@property (nonatomic) WBSWebExtensionContextMenuItemInfo info;
@property (nonatomic) WBSWebExtensionContextMenuItemEntry parentEntry;
@property (nonatomic) NSMutableOrderedSet children;
- (void)setInfo:;
- (id)identifier;
- (id)children;
- (void).cxx_destruct;
- (id)description;
- (id)info;
- (id)initWithIdentifier:;
- (id)parentEntry;
- (void)setParentEntry:;
- (void)performWithSelfAndChildren:;
@end
