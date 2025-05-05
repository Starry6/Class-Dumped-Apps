@interface WBSWebExtensionContextMenuItem : NSObject
@property (nonatomic) WBSWebExtensionContextMenuItemInfo info;
@property (nonatomic) NSArray children;
@property (nonatomic) WBSWebExtensionContextMenuContext context;
- (id)context;
- (id)children;
- (void).cxx_destruct;
- (id)info;
+ (id)itemWithInfo:children:context:;
@end
