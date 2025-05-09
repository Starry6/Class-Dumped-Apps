@interface IESLiveSaaSDislikeMenuView : UIControl
@property (nonatomic) NSArray menuItems;
@property (nonatomic) UIView menuItemsContainerView;
@property (nonatomic) @? dismissBlock;
@property (nonatomic) double originY;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)addMenuItem:;
- (id)frontWindow;
- (void)itemViewClicked:;
- (void)layoutVerticalMenus;
- (void)makeVisiableWithAnimation;
- (id)menuItemsContainerView;
- (unsigned long long)menuItemsCount;
- (void)menuViewDidClicked:;
- (void)setMenuItemsContainerView:;
- (void)showInWindow;
- (void)showWithContainerView:;
- (void)dismiss;
- (void)setMenuItems:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)menuItems;
- (void)setOriginY:;
- (double)originY;
- (id)dismissBlock;
- (void)setDismissBlock:;
+ (id)emptyMenuView;
@end
