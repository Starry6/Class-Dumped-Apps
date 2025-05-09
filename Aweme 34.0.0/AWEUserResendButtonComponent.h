@interface AWEUserResendButtonComponent : NSObject
@property (nonatomic) AWEUserLoginBaseViewModel<AWEUserLoginViewModelSecondaryProtocol> viewModel;
@property (nonatomic) AWEUserLoginSMSResendCodeView resendView;
@property (nonatomic) AWEUserSendCodeModel codeModel;
@property (nonatomic) q verificationStatus;
@property (nonatomic) BOOL buttonClicked;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)buttonClicked;
- (id)codeModel;
- (void)setCodeModel:;
- (void)setButtonClicked:;
- (void)setupComponentView;
- (id)initWithLoginViewModel:;
- (void)updateVerificationStatus:;
- (void)startBind;
- (BOOL)isForModifyProcess;
- (void)resendCodeButtonClick;
- (id)resendView;
- (void)requestSendVerificationForLoginProcess;
- (void)setResendView:;
- (id)viewModel;
- (unsigned long long)componentType;
- (void)setViewModel:;
- (void).cxx_destruct;
- (id)componentView;
- (void)setVerificationStatus:;
- (long long)verificationStatus;
@end
