@interface AWEBizTabBarTheaterItemsConfig : NSObject
@property (nonatomic) UIButton<AWENormalModeTabBarGeneralButtonProtocol> theaterButton;
@property (nonatomic) AWETheaterViewController theaterViewController;
@property (nonatomic) <AWENormalModeTabBarItemConfigAbility> tabBarAbility;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setupTabBarAbility:;
- (void)tabBarDidSelectItemFromPreviousSelectedType:isByTap:;
- (id)tabBarItemButton;
- (id)tabBarItemViewController;
- (BOOL)canLandingWithTabId:params:;
- (id)selectInfoAtTabBarItemSelection;
- (BOOL)shouldHandleTabBarItemSelectionFromPreviousSelectedType:isByTap:;
- (id)aAWENormalModeTabBarFactoryCommonAdapter;
- (void)setTabBarAbility:;
- (id)tabBarAbility;
- (id)aAWETheaterViewControllerCommonAdapter;
- (void)showUnreadBadgeWithComponentID:showCallBack:hideCallBack:downgradeCallBack:;
- (id)theaterButton;
- (id)theaterViewController;
- (void)setTheaterButton:;
- (void)setTheaterViewController:;
- (void).cxx_destruct;
+ (Class)aAWENormalModeTabBarFactoryCommonAdapterClass;
+ (Class)aAWETheaterViewControllerCommonAdapterClass;
+ (id)sharedConfig;
@end
