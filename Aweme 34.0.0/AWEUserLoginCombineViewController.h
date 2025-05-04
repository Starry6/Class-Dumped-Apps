@interface AWEUserLoginCombineViewController : AWEUserLoginBaseViewController
@property (nonatomic) AWEUserLoginCombineViewModel viewModel;
@property (nonatomic) UIView navigationBar;
@property (nonatomic) UIView containerView;
- (id)pageBtm;
- (void)setupContainerView;
- (id)initWithCombineLoginUsers:;
- (void)setupBgViewIfNeed;
- (void)setupLoginComponentView;
- (void)bindUI;
- (id)aAWEUserLoginCombineViewControllerAdapter;
- (id)navigationBar;
- (id)viewModel;
- (void)viewDidLoad;
- (id)containerView;
- (long long)preferredStatusBarStyle;
- (void)setContainerView:;
- (void)setViewModel:;
- (void).cxx_destruct;
- (void)setNavigationBar:;
- (void)setupUI;
- (void)setupNavigationBar;
+ (Class)aAWEUserLoginCombineViewControllerAdapterClass;
@end
