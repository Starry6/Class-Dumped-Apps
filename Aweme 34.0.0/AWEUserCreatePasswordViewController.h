@interface AWEUserCreatePasswordViewController : UIViewController
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel subTitleLabel;
@property (nonatomic) UILabel passwordErrorTipLabel;
@property (nonatomic) UILabel confirmPasswordErrorTipLabel;
@property (nonatomic) DYLoginInputView passwordInputView;
@property (nonatomic) DYLoginInputView confirmPasswordInputView;
@property (nonatomic) DYLoginNextActionButton loginButton;
@property (nonatomic) UIView contentView;
@property (nonatomic) NSArray notificationObservers;
@property (nonatomic) BOOL shouldHandleTransformForKeyboardCovering;
@property (nonatomic) BOOL isFirstHandleTransformForKeyboardCovering;
@property (nonatomic) BOOL shouldRecoverChange;
@property (nonatomic) NSObject<AWEUserLoginUILayoutConfig> layoutConfig;
@property (nonatomic) DYRouterModel routerModel;
@property (nonatomic) @? finishBlock;
@property (nonatomic) NSString enterFrom;
- (void)p_setupUI;
- (void)setEnterFrom:;
- (BOOL)awe_shouldAutorotate;
- (unsigned long long)awe_supportedInterfaceOrientations;
- (id)enterFrom;
- (BOOL)inLoginProcedure;
- (BOOL)isBusinessAccount;
- (void)setLayoutConfig:;
- (void)skipAction;
- (id)routerModel;
- (void)setRouterModel:;
- (void)p_setupNavigationBar;
- (id)passwordInputView;
- (void)setPasswordInputView:;
- (void)finishLogin;
- (void)handleKeyboardAnimationWithShow:userInfo:;
- (void)resetNextButtonStatus;
- (void)handlePasswordErrorMessage:;
- (void)handleConfirmPasswordErrorMessage:;
- (id)confirmPasswordInputView;
- (void)trackPassportSubPasswordSettingEvent:clickType:result:error:;
- (void)p_setupNormalStyle;
- (id)passwordErrorTipLabel;
- (id)confirmPasswordErrorTipLabel;
- (void)setShouldHandleTransformForKeyboardCovering:;
- (void)setShouldRecoverChange:;
- (void)setIsFirstHandleTransformForKeyboardCovering:;
- (BOOL)shouldHandleTransformForKeyboardCovering;
- (BOOL)isFirstHandleTransformForKeyboardCovering;
- (BOOL)shouldRecoverChange;
- (void)requestResetPassword;
- (void)inputPasswordSubmit;
- (BOOL)checkPassword;
- (void)nextAction:;
- (void)setPasswordErrorTipLabel:;
- (void)setConfirmPasswordErrorTipLabel:;
- (void)setConfirmPasswordInputView:;
- (void)dealloc;
- (id)notificationObservers;
- (void)viewDidLoad;
- (id)contentView;
- (id)initWithContext:;
- (void)setNotificationObservers:;
- (long long)preferredStatusBarStyle;
- (id)titleText;
- (id)subTitleText;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (void)setContentView:;
- (id)titleLabel;
- (void)backAction;
- (void)setSubTitleLabel:;
- (id)subTitleLabel;
- (void)setFinishBlock:;
- (id)finishBlock;
- (void)setLoginButton:;
- (id)loginButton;
- (id)layoutConfig;
@end
