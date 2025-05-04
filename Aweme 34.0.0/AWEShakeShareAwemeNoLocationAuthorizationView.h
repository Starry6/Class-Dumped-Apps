@interface AWEShakeShareAwemeNoLocationAuthorizationView : UIView
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel descriptionLabel;
@property (nonatomic) UIButton authButton;
@property (nonatomic) @? authBlock;
- (void)initView;
- (id)authButton;
- (void)authButtonTapped;
- (void)setAuthButton:;
- (id)authBlock;
- (void)setAuthBlock:;
- (void)setDescriptionLabel:;
- (id)initWithFrame:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)descriptionLabel;
- (void)setupLayout;
@end
