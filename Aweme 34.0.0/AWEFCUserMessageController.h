@interface AWEFCUserMessageController : AWEBaseController
@property (nonatomic) BOOL processingLogin;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didFinishLogin;
- (void)willStartLogin;
- (void)didCancelLogin;
- (void)didLoginFailed;
- (void)didFinishLogoutWithUid:;
- (void)willLoginAtPlatform:;
- (void)didFinishBind:platform:error:;
- (void)setProcessingLogin:;
- (BOOL)processingLogin;
- (void)didFinishSwitchAccount;
- (void)followYellowDotRefactorHideYellowDotForConcernTab;
- (void)dealloc;
- (void)viewDidLoad;
@end
