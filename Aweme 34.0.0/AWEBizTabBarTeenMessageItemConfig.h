@interface AWEBizTabBarTeenMessageItemConfig : NSObject
@property (nonatomic) UIButton<AWETeenModeTabBarGeneralButtonProtocol> teenMessageButton;
@property (nonatomic) AWETeenMessageViewController teenModeMessageViewController;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didFinishLogin;
- (void)didFinishLogoutWithUid:;
- (void)tabBarDidSelectItemFromPreviousSelectedType:isByTap:;
- (id)tabBarItemButton;
- (id)tabBarItemViewController;
- (BOOL)canLandingWithTabId:params:;
- (BOOL)loginIfNeededAtTabBarItemSelection:;
- (id)loginInfoAtTabBarItemSelectionFromPreviousSelectedType:;
- (id)selectInfoAtTabBarItemSelection;
- (BOOL)shouldHandleTabBarItemSelectionFromPreviousSelectedType:isByTap:;
- (void)tabBarDidDeselectItem;
- (void)p_fetchUnreadMessageCount;
- (id)teenMessageButton;
- (id)teenModeMessageViewController;
- (void)setTeenMessageButton:;
- (void)setTeenModeMessageViewController:;
- (void)dealloc;
- (void).cxx_destruct;
- (void)setupConfig;
@end
