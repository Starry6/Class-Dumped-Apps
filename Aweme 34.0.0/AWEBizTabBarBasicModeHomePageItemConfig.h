@interface AWEBizTabBarBasicModeHomePageItemConfig : NSObject
@property (nonatomic) UIButton<AWEBasicModeTabBarGeneralButtonProtocol> homePageButton;
@property (nonatomic) AWEBasicModeTabBarViewController userHomeController;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)tabBarItemButton;
- (id)tabBarItemViewController;
- (BOOL)canLandingWithTabId:params:;
- (id)selectInfoAtTabBarItemSelection;
- (BOOL)shouldHandleTabBarItemSelectionFromPreviousSelectedType:isByTap:;
- (id)homePageButton;
- (id)userHomeController;
- (void)setHomePageButton:;
- (void)setUserHomeController:;
- (void).cxx_destruct;
+ (id)sharedConfig;
@end
