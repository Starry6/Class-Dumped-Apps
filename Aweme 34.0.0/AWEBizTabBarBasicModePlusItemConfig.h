@interface AWEBizTabBarBasicModePlusItemConfig : NSObject
@property (nonatomic) AWEBasicModeTabBarGeneralPlusButton plusButton;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)tabBarItemButton;
- (id)tabBarItemViewController;
- (BOOL)canLandingWithTabId:params:;
- (id)selectInfoAtTabBarItemSelection;
- (BOOL)shouldHandleTabBarItemSelectionFromPreviousSelectedType:isByTap:;
- (id)plusButton;
- (void).cxx_destruct;
- (void)setPlusButton:;
+ (id)sharedConfig;
@end
