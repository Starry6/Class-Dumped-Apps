@interface AWEUserLoginCustomButtonView : AWEUserLoginButtonView
@property (nonatomic) AWEUserLoginButtonModel model;
@property (nonatomic) DYLoginNextActionButton actionButton;
@property (nonatomic) BOOL breathAnimating;
@property (nonatomic) NSTimer breathTimer;
@property (nonatomic) DUXButton SMSLoginButton;
- (void)buttonClicked;
- (id)breathTimer;
- (void)setBreathTimer:;
- (BOOL)breathAnimating;
- (void)setBreathAnimating:;
- (id)SMSLoginButton;
- (void)setSMSLoginButton:;
- (id)aAWEUserLoginUIComponentThemeAdapter;
- (void)layoutGeneralView;
- (void)clickSMSLoginButton:;
- (void)setModel:;
- (id)initWithModel:;
- (id)model;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setupUI;
- (id)actionButton;
- (void)setActionButton:;
+ (Class)aAWEUserLoginUIComponentThemeAdapterClass;
@end
