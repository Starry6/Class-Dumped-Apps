@interface AWEUserLoginPadHalfScreenCarrierViewController : AWEUserLoginBaseViewController
@property (nonatomic) AWEUserLoginCarrierViewModel viewModel;
@property (nonatomic) UIView whiteBackView;
@property (nonatomic) UIView containerView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)pageBtm;
- (void)setupContainerView;
- (id)initWithPhoneModel:;
- (void)setupBgViewIfNeed;
- (void)setupGeneralLoginComponentView;
- (void)addWhiteBackView;
- (id)whiteBackView;
- (void)addThemeHeaderView;
- (void)setWhiteBackView:;
- (id)viewModel;
- (void)viewDidLoad;
- (id)containerView;
- (void)setContainerView:;
- (void)setViewModel:;
- (void).cxx_destruct;
- (void)setupUI;
- (void)setupNavigationBar;
@end
