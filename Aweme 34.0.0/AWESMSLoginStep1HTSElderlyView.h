@interface AWESMSLoginStep1HTSElderlyView : AWESMSLoginStep1BaseView
@property (nonatomic) UILabel subTitleLabel;
@property (nonatomic) UIImageView logoView;
@property (nonatomic) UIView verticalLine;
- (id)verticalLine;
- (void)setVerticalLine:;
- (id)createLoginButton;
- (void)setupElderlyUIContent;
- (void)changeLoginButtonBgColor;
- (BOOL)becomeFirstResponder;
- (void)dealloc;
- (void)appWillEnterForeground:;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)keyboardWillShow:;
- (void)setupUI;
- (void)setSubTitleLabel:;
- (id)subTitleLabel;
- (id)logoView;
- (void)hideError;
- (void)showError;
- (void)setLogoView:;
@end
