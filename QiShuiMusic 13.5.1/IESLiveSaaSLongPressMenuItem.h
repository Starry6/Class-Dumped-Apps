@interface IESLiveSaaSLongPressMenuItem : NSObject
@property (nonatomic) NSString itemTitle;
@property (nonatomic) UIImage itemImage;
@property (nonatomic) NSURL itemImageURL;
@property (nonatomic) @? menuItemAction;
- (id)menuItemAction;
- (void)setMenuItemAction:;
- (void)performAction;
- (void).cxx_destruct;
- (id)itemTitle;
- (void)setItemTitle:;
- (id)itemImage;
- (void)setItemImage:;
- (id)itemImageURL;
- (void)setItemImageURL:;
+ (id)itemWithTitle:imageURL:handler:;
+ (id)itemWithTitle:image:handler:;
@end
