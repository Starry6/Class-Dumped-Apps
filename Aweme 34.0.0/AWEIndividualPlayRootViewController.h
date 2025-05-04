@interface AWEIndividualPlayRootViewController : UIViewController
@property (nonatomic) AWEIndividualRefreshView refreshView;
@property (nonatomic) UIView<AWESplashFakeLaunchScreenView> fakeLaunchScreenView;
- (id)fakeLaunchScreenView;
- (void)removeFakeLaunchScreen;
- (void)setFakeLaunchScreenView:;
- (id)refreshView;
- (void)setRefreshView:;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)viewDidAppear:;
- (void)setupUI;
@end
