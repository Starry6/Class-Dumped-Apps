@interface IESECMallLoginView : UIView
@property (nonatomic) UIImageView imageView;
@property (nonatomic) UILabel tipLabel;
@property (nonatomic) UILabel subTipLabel;
@property (nonatomic) UIButton loginButton;
@property (nonatomic) Q theme;
@property (nonatomic) @? loginBtnClickedBlock;
- (void)setSubTipLabel:;
- (void)loginBtnClicked:;
- (id)loginBtnClickedBlock;
- (void)setLoginBtnClickedBlock:;
- (void)setupSubviewsPosition;
- (id)subTipLabel;
- (void)setTheme:;
- (unsigned long long)theme;
- (void).cxx_destruct;
- (id)imageView;
- (void)setImageView:;
- (id)tipLabel;
- (void)setTipLabel:;
- (id)initWithTheme:;
- (id)loginButton;
- (void)setLoginButton:;
@end
