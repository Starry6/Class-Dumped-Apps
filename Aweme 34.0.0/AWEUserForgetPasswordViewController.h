@interface AWEUserForgetPasswordViewController : AWEUserContainerBaseViewController
@property (nonatomic) AWEUserForgetPasswordViewModel viewModel;
@property (nonatomic) UIView verificationView;
@property (nonatomic) AWEUserLoginErrorInfoLabel errorLabel;
@property (nonatomic) UIView button;
- (void)viewControllerBindingUI;
- (void)cursorFocusWhenAppear;
- (id)initWithSendCodeModel:;
- (void)addErrorLabel:;
- (id)verificationView;
- (void)setVerificationView:;
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
