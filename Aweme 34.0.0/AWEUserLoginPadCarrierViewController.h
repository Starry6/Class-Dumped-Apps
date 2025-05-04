@interface AWEUserLoginPadCarrierViewController : AWEUserLoginBaseViewController
@property (nonatomic) AWEUserLoginCarrierViewModel viewModel;
@property (nonatomic) UIView navigationBar;
@property (nonatomic) UIView containerView;
@property (nonatomic) UIView carrierPhoneView;
- (id)pageBtm;
- (void)setupContainerView;
- (id)initWithPhoneModel:;
- (id)carrierPhoneView;
- (void)setCarrierPhoneView:;
- (void)setupBgViewIfNeed;
- (void)setupGeneralLoginComponentView;
- (void)updateViewLayoutWithHighlyCompact:viewSize:;
- (id)navigationBar;
- (id)viewModel;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:withTransitionCoordinator:;
- (id)containerView;
- (void)setContainerView:;
- (void)setViewModel:;
- (void).cxx_destruct;
- (void)setNavigationBar:;
- (void)setupUI;
- (void)setupNavigationBar;
@end
