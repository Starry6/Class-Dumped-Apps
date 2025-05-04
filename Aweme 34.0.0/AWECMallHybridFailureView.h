@interface AWECMallHybridFailureView : UIView
@property (nonatomic) UIImageView logoImageView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel tipsLabel;
@property (nonatomic) UIButton refreshButton;
@property (nonatomic) @? actionHandler;
- (id)tipsLabel;
- (void)setTipsLabel:;
- (void)refreshButtonAction;
- (id)actionHandler;
- (void)setActionHandler:;
- (id)initWithFrame:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (void)setupConstraints;
- (id)titleLabel;
- (void)setupUI;
- (id)logoImageView;
- (void)setLogoImageView:;
- (id)refreshButton;
- (void)setRefreshButton:;
@end
