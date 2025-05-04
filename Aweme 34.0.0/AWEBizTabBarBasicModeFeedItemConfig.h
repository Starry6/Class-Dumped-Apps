@interface AWEBizTabBarBasicModeFeedItemConfig : NSObject
@property (nonatomic) UIButton<AWEBasicModeTabBarGeneralButtonProtocol> feedButton;
@property (nonatomic) AWEBasicModeFeedRootViewController feedViewController;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)tabBarItemButton;
- (id)tabBarItemViewController;
- (BOOL)canLandingWithTabId:params:;
- (id)selectInfoAtTabBarItemSelection;
- (BOOL)shouldHandleTabBarItemSelectionFromPreviousSelectedType:isByTap:;
- (id)feedButton;
- (void)setFeedViewController:;
- (void)setFeedButton:;
- (void).cxx_destruct;
- (id)feedViewController;
+ (id)sharedConfig;
@end
