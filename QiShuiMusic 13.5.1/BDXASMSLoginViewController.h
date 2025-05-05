@interface BDXASMSLoginViewController : BDXALoginViewController
@property (nonatomic) BDXASimpleInputViewController sendSMSCodeViewController;
@property (nonatomic) UIButton passwordLoginBtn;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)continueLoginConfirmAgreementViewController:type:;
- (void)displayToastWithText:type:;
- (BOOL)extraLoginViewController:shouldIgnoreExtraLogin:;
- (void)layoutExtraLoginViewController;
- (id)loadBottomClickableTextSimpleInputViewController:;
- (id)passwordLoginBtn;
- (id)sendSMSCodeViewController;
- (void)setPasswordLoginBtn:;
- (void)setSendSMSCodeViewController:;
- (void)simpleInputViewController:commitInputWithParams:completion:;
- (BOOL)simpleInputViewControllerMainBtnTapped:;
- (void)switchToPasswordLogin;
- (id)viewShouldNotOverSpreadByKeyboard;
- (void)layoutViews;
- (void).cxx_destruct;
- (void)viewDidAppear:;
- (void)viewDidLoad;
- (void)setPageContent:;
- (id)loginType;
@end
