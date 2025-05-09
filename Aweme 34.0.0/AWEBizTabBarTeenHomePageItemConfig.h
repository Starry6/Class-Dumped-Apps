@interface AWEBizTabBarTeenHomePageItemConfig : NSObject
@property (nonatomic) UIButton<AWETeenModeTabBarGeneralButtonProtocol> teenHomePageButton;
@property (nonatomic) AWETeenUserHomeViewController teenUserHomeController;
@property (nonatomic) DUXTeenPopover popover;
@property (nonatomic) @? onCloseAlert;
@property (nonatomic) BOOL isShowingBubble;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didFinishLogin;
- (void)didFinishLogoutWithUid:;
- (void)showWithCloseCallback:;
- (void)popoverDidDisappear:;
- (void)tabBarDidSelectItemFromPreviousSelectedType:isByTap:;
- (id)tabBarItemButton;
- (id)tabBarItemViewController;
- (BOOL)canLandingWithTabId:params:;
- (BOOL)loginIfNeededAtTabBarItemSelection:;
- (id)loginInfoAtTabBarItemSelectionFromPreviousSelectedType:;
- (id)selectInfoAtTabBarItemSelection;
- (BOOL)shouldHandleTabBarItemSelectionFromPreviousSelectedType:isByTap:;
- (void)setIsShowingBubble:;
- (BOOL)isShowingBubble;
- (void)dismissPopoverIfNeeded;
- (void)didUpdateAlbumCollectStatus:albumID:;
- (void)showPrivateWorkPopoverIfNeeded;
- (void)p_tryToShowAlbumCollectRedDot;
- (void)tryToShowPrivateWorkPopover;
- (id)teenHomePageButton;
- (id)teenUserHomeController;
- (id)onCloseAlert;
- (void)setOnCloseAlert:;
- (void)showPrivateWorkPopover;
- (void)setTeenHomePageButton:;
- (void)setTeenUserHomeController:;
- (void)dealloc;
- (id)popover;
- (void).cxx_destruct;
- (void)applicationWillEnterForeground;
- (void)setPopover:;
- (void)setupConfig;
@end
