@interface AWEDPUndertakeRenderStep : AWEWorkflowStep
@property (nonatomic) NSString className;
@property (nonatomic) UIViewController targetViewController;
@property (nonatomic) AWEDLMSession linkSession;
- (void)setTargetViewController:;
- (void)handleViewWillAppear:;
- (void)onStep:linkSession:;
- (void)setLinkSession:;
- (void)_handleSessionTimeOut:;
- (id)linkSession;
- (void)_removeObserver;
- (id)className;
- (void)setClassName:;
- (void).cxx_destruct;
- (id)targetViewController;
@end
