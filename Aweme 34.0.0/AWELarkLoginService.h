@interface AWELarkLoginService : NSObject
@property (nonatomic) UIView keyView;
@property (nonatomic) BOOL showLoadingView;
@property (nonatomic) NSURL url;
- (void)setShowLoadingView:;
- (void)showLoadingParticleView;
- (void)accountPrivacyPolicyAgreeNotification;
- (void)hideLoadingParticleView;
- (void)pushLoginVerifyController:;
- (void)larkLoginFailureWithError:ticket:;
- (void)larkLoginSuccess:ticket:;
- (void)setUrl:;
- (void).cxx_destruct;
- (id)url;
- (id)keyView;
- (void)setKeyView:;
- (BOOL)showLoadingView;
- (void)handleOpenURL:;
+ (id)shareManager;
@end
