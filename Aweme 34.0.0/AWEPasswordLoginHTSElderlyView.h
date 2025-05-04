@interface AWEPasswordLoginHTSElderlyView : AWEPasswordLoginBaseView
@property (nonatomic) UILabel subTitleLabel;
@property (nonatomic) UIImageView logoView;
- (void)showBubbleWithAdapter:;
- (void)setupElderlyUIContent;
- (void)hideErrorHint;
- (void)changeLoginButtonBgColor;
- (void)showErrorHint:;
- (void)hideForgetPasswordButton;
- (void)showForgetPasswordButton;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setupUI;
- (void)setSubTitleLabel:;
- (id)subTitleLabel;
- (id)logoView;
- (void)setLogoView:;
@end
