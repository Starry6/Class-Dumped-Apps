@interface AWEDPUndertakeResultCheckStep : AWEWorkflowStep
@property (nonatomic) NSURL openUrl;
@property (nonatomic) AWEDLMSession linkSession;
@property (nonatomic) UIViewController targetViewController;
@property (nonatomic) NSDictionary extraParams;
@property (nonatomic) AWEDeepLinkToken token;
- (void)setExtraParams:;
- (id)extraParams;
- (void)setTargetViewController:;
- (id)openUrl;
- (void)setOpenUrl:;
- (void)onStep:linkSession:;
- (void)setLinkSession:;
- (id)linkSession;
- (void)_startUndertakeResultListen:;
- (BOOL)_checkUndertakeSuccessForFeedScene;
- (void)_handleUndertakeResultCheck:;
- (void)_handleSessionTimeoutNotification:;
- (void)_handleVideoInsertNotification:;
- (void)_handleStayTime;
- (void)removeNotificationsObserver;
- (void)dealloc;
- (void).cxx_destruct;
- (void)setToken:;
- (id)token;
- (id)targetViewController;
@end
