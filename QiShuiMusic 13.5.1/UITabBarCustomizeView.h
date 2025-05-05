@interface UITabBarCustomizeView : UIView
@property (nonatomic) NSArray availableItems;
@property (nonatomic) UINavigationBar navigationBar;
- (void)setNavigationBar:;
- (void)touchesBegan:withEvent:;
- (void)layoutSubviews;
- (id)navigationBar;
- (id)initWithFrame:;
- (void)traitCollectionDidChange:;
- (void).cxx_destruct;
- (void)touchesMoved:withEvent:;
- (void)touchesEnded:withEvent:;
- (void)touchesCancelled:withEvent:;
- (id)titleLabelFont;
- (long long)_barMetrics;
- (void)tintTabBarItemsForEdit:;
- (void)updateProxiesSelection;
- (void)setIsBeingDismissed;
- (void)setTabBar:currentItems:availableItems:;
- (void)adjustDragImageWithTouches:withEvent:;
- (id)itemInTabBarWithTouches:withEvent:;
- (void)tabBarTouchesBegan:withEvent:;
- (void)tabBarTouchesMoved:withEvent:;
- (void)tabBarTouchesEnded:withEvent:;
- (void)tabBarTouchesCancelled:withEvent:;
- (id)availableItems;
- (void)setAvailableItems:;
@end
