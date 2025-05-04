@interface AWEBaseTabBarController : UITabBarController
@property (nonatomic) BOOL hasAddTabBarOnIPadOS18;
@property (nonatomic) BOOL navigationTransitionFlag;
@property (nonatomic) BOOL navigationPopTransitionFlag;
@property (nonatomic) BOOL forbidsDismissBeforeReload;
- (void)setNavigationTransitionFlag:;
- (void)setNavigationPopTransitionFlag:;
- (void)addFixIPadOS18TabBarIfNeeded;
- (BOOL)isTabBarFixIOS18VisibleEnabled;
- (BOOL)isFixTarBarOnIPadOS18;
- (id)tabBarTargetSubViewOnIPadOS18;
- (BOOL)hasAddTabBarOnIPadOS18;
- (void)setHasAddTabBarOnIPadOS18:;
- (BOOL)isTabBarFixXcode16BackgroundColorEnabled;
- (void)fixIPadOS18TabBar;
- (void)addFixXcode16BackgroundColorIfNeed;
- (void)fixIOS18TabBarVisibleWithNewSelectedIndex:;
- (void)updateInterfaceOrientationsIfNeeded;
- (BOOL)navigationTransitionFlag;
- (BOOL)navigationPopTransitionFlag;
- (BOOL)forbidsDismissBeforeReload;
- (void)setForbidsDismissBeforeReload:;
- (void)addChildViewController:;
- (void)setSelectedIndex:;
- (void)viewDidLoad;
- (id)initWithTabBar:;
+ (void)fixiOS12TransitionLayout;
@end
