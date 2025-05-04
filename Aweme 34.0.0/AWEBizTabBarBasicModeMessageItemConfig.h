@interface AWEBizTabBarBasicModeMessageItemConfig : NSObject
@property (nonatomic) UIButton<AWEBasicModeTabBarGeneralButtonProtocol> messageButton;
@property (nonatomic) AWEBasicModeTabBarViewController messageController;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)tabBarItemButton;
- (id)tabBarItemViewController;
- (BOOL)canLandingWithTabId:params:;
- (id)selectInfoAtTabBarItemSelection;
- (BOOL)shouldHandleTabBarItemSelectionFromPreviousSelectedType:isByTap:;
- (void)setMessageController:;
- (void).cxx_destruct;
- (id)messageButton;
- (void)setMessageButton:;
- (id)messageController;
+ (id)sharedConfig;
@end
