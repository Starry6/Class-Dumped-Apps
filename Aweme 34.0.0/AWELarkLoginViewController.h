@interface AWELarkLoginViewController : UIViewController
@property (nonatomic) UILabel contentLabel;
@property (nonatomic) UITextField codeInputView;
@property (nonatomic) q curCountDown;
@property (nonatomic) NSTimer timer;
@property (nonatomic) DYLoginNextActionButton loginButton;
@property (nonatomic) UILabel codeLabel;
@property (nonatomic) UITextField codeTextField;
@property (nonatomic) UIButton codeButton;
@property (nonatomic) UIView lineView;
@property (nonatomic) BOOL isSendingCode;
@property (nonatomic) UIButton clearButton;
@property (nonatomic) DYASecurityTicketModel model;
@property (nonatomic) NSString mobilePhone;
- (void)setCountDownAndTimer:;
- (void)setCurCountDown:;
- (void)countDownAction:;
- (long long)curCountDown;
- (id)codeLabel;
- (void)setCodeLabel:;
- (id)codeInputView;
- (void)loginAction:;
- (void)setCodeInputView:;
- (id)codeButton;
- (void)setLoginButtonEnable:;
- (void)codeButtonAction;
- (BOOL)isSendingCode;
- (void)setIsSendingCode:;
- (void)clearAction:;
- (void)setCodeButton:;
- (void)setModel:;
- (void)setTimer:;
- (id)timer;
- (void)viewDidLoad;
- (id)model;
- (void).cxx_destruct;
- (id)clearButton;
- (void)viewDidAppear:;
- (void)closeAction;
- (id)mobilePhone;
- (id)lineView;
- (void)setLineView:;
- (id)contentLabel;
- (void)setContentLabel:;
- (void)textFieldDidChange:;
- (void)extracted;
- (void)setMobilePhone:;
- (void)setLoginButton:;
- (id)loginButton;
- (void)setClearButton:;
- (id)codeTextField;
- (void)setCodeTextField:;
@end
