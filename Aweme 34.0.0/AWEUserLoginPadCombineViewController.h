@interface AWEUserLoginPadCombineViewController : AWEUserLoginBaseViewController
@property (nonatomic) AWEUserLoginCombineViewModel viewModel;
@property (nonatomic) UIView navigationBar;
@property (nonatomic) UIView containerView;
@property (nonatomic) UIView avatarContentView;
- (id)pageBtm;
- (void)setupContainerView;
- (id)initWithCombineLoginUsers:;
- (void)setupBgViewIfNeed;
- (void)setupLoginComponentView;
- (void)bindUI;
- (id)aAWEUserLoginCombineViewControllerAdapter;
- (void)updateViewLayoutWithHighlyCompact:viewSize:;
- (id)navigationBar;
- (id)viewModel;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:withTransitionCoordinator:;
- (id)containerView;
- (long long)preferredStatusBarStyle;
- (void)setContainerView:;
- (void)setViewModel:;
- (void).cxx_destruct;
- (void)setNavigationBar:;
- (void)setupUI;
- (void)setupNavigationBar;
- (id)avatarContentView;
- (void)setAvatarContentView:;
+ (Class)aAWEUserLoginCombineViewControllerAdapterClass;
@end
