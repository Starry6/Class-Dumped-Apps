@interface AWESearchVideoGoodsAlertViewController : UIViewController
@property (nonatomic) UIImageView headerImageView;
@property (nonatomic) UIView containerView;
@property (nonatomic) UIStackView stackView;
@property (nonatomic) UIButton closeButton;
@property (nonatomic) UIButton leftButton;
@property (nonatomic) UIButton rightButton;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel contentLabel;
@property (nonatomic) BOOL authorizationState;
- (void)configUI;
- (void)closeAuthorization:;
- (void)closeButtonDidClick:;
- (void)openAuthorization:;
- (void)closeViewByMethod:;
- (void)setupMaskLayer;
- (void)removeButtonCallback;
- (void)setLeftButton:;
- (void)viewWillDisappear:;
- (void)setRightButton:;
- (id)stackView;
- (void)setStackView:;
- (id)leftButton;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)containerView;
- (id)rightButton;
- (void)setAuthorizationState:;
- (void)setContainerView:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (BOOL)authorizationState;
- (void)setupConstraints;
- (void)viewDidAppear:;
- (id)titleLabel;
- (id)contentLabel;
- (void)setContentLabel:;
- (void)setupView;
- (void)updateUI;
- (void)setCloseButton:;
- (id)closeButton;
- (id)headerImageView;
- (void)setHeaderImageView:;
- (void)tapGestureHandler:;
@end
