@interface AWEDPTransferStep : AWEWorkflowStep
@property (nonatomic) UIViewController targetViewController;
@property (nonatomic) NSDictionary prepareUserInfo;
- (BOOL)isTeenModeEnabled;
- (void)setTargetViewController:;
- (void)onStep:linkSession:;
- (void)setPrepareUserInfo:;
- (void)reportOpenURL:resultURL:isSuccess:;
- (id)prepareUserInfo;
- (void)switchToRootPage:session:completion:;
- (void).cxx_destruct;
- (void)_handlePushViewController:;
- (id)targetViewController;
@end
