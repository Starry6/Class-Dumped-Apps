@interface AWEUserLoginCarrierViewController : AWEUserLoginBaseViewController
@property (nonatomic) AWEUserLoginCarrierViewModel viewModel;
@property (nonatomic) UIView navigationBar;
@property (nonatomic) UIView containerView;
- (id)pageBtm;
- (void)setupContainerView;
- (id)initWithPhoneModel:;
- (void)setupBgViewIfNeed;
- (void)setupLoginComponentView;
- (void)setupHTSElderlyLoginComponentView;
- (void)setupGeneralLoginComponentView;
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
@end
