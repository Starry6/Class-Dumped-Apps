@interface AWEBizTabBarTeenPlusItemConfig : NSObject
@property (nonatomic) AWETeenModeTabBarPlusButton teenPlusButton;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didFinishLogin;
- (void)dismissBubbleIfNeeded;
- (void)teenModeDidChange:isLogout:;
- (id)tabBarItemButton;
- (id)tabBarItemViewController;
- (BOOL)canLandingWithTabId:params:;
- (BOOL)shouldHandleTabBarItemSelectionFromPreviousSelectedType:isByTap:;
- (void)showGuideIconAnimationIfNeeded:;
- (void)forceStopBubble;
- (id)teenPlusButton;
- (void)setTeenPlusButton:;
- (void)dealloc;
- (void).cxx_destruct;
- (void)reset;
- (void)setupConfig;
@end
