@interface AWEUserResetPasswordViewController : AWEUserContainerBaseViewController
@property (nonatomic) AWEUserResetPasswordViewModel viewModel;
@property (nonatomic) UIView passwordInputView;
@property (nonatomic) UIView passwordCheckInput;
@property (nonatomic) UIView button;
@property (nonatomic) AWEUserLoginErrorInfoLabel errorLabel;
- (void)skipAction;
- (id)passwordInputView;
- (void)setPasswordInputView:;
- (void)viewControllerBindingUI;
- (void)cursorFocusWhenAppear;
- (void)addErrorLabel:;
- (id)initWithTicketModel:sendScene:;
- (id)initWithFinish:;
- (id)passwordCheckInput;
- (void)setPasswordCheckInput:;
- (id)viewModel;
- (void)viewDidLoad;
- (void)setButton:;
- (void)setViewModel:;
- (void).cxx_destruct;
- (id)button;
- (void)setupUI;
- (void)hideError;
- (id)errorLabel;
- (void)setErrorLabel:;
@end
