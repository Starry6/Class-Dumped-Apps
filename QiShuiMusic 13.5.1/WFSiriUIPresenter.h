@interface WFSiriUIPresenter : NSObject
@property (nonatomic) NSXPCConnection xpcConnection;
@property (nonatomic) BOOL connected;
@property (nonatomic) NSXPCListenerEndpoint endpoint;
- (void)setConnected:;
- (BOOL)connected;
- (void)setXpcConnection:;
- (id)initWithEndpoint:;
- (id)xpcConnection;
- (void).cxx_destruct;
- (id)endpoint;
- (void)willBeginExecutingShortcutWithActionCount:;
- (void)willBeginExecutingShortcutStep:;
- (void)speakTextWithUtterance:completionHandler:;
- (void)openUrl:withBundleIdentifier:completionHandler:;
- (void)executeIntent:completionHandler:;
- (void)showDialogRequest:completionHandler:;
- (void)openInteractionInApp:completionHandler:;
- (void)openApp:completionHandler:;
- (void)executeLinkAction:inApplication:completionHandler:;
- (void)executeLinkAction:inApplication:withNameOverride:completionHandler:;
- (void)punchOutRequestedWithCompletionHandler:;
- (void)resumeConnectionIfNecessary;
- (id)presenterWithErrorHandler:;
- (void)handleUserActivity:withBundleIdentifier:completionHandler:;
@end
