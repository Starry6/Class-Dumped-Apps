@interface STCoreStart.BNRootViewController : ESTabBarController_swift.ESTabBarController
@property (nonatomic) q selectedIndex;
@property (nonatomic) BOOL shouldAutorotate;
@property (nonatomic) Q supportedInterfaceOrientations;
- (BOOL)tabBarController:shouldSelectViewController:;
- (void)tabBarController:didSelectViewController:;
- (void)handleLyricModeNotification:;
- (void)onPanGesture:;
- (void)onTapGesture:;
- (BOOL)shouldAutorotate;
- (long long)selectedIndex;
- (id)initWithCoder:;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (void)viewDidAppear:;
- (BOOL)gestureRecognizerShouldBegin:;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLayoutSubviews;
- (id)initWithNibName:bundle:;
- (void)viewDidLoad;
- (void)setSelectedIndex:;
@end
