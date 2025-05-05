@interface AFRemoteRequestWatcher : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)dealloc;
- (void)setRequestHandler:;
- (void).cxx_destruct;
- (void)setDismissalHandler:;
- (void)setActivationHandler:;
- (void)siriActivationListener:handleIntent:inBackgroundAppWithBundleId:reply:;
- (void)siriActivationListener:handleIntentForwardingAction:inBackgroundApplicationWithBundleIdentifier:completionHandler:;
- (void)siriActivationListener:prewarmWithRequestInfo:context:completion:;
- (void)siriActivationListener:activateWithRequestInfo:context:completion:;
- (void)siriActivationListener:deactivateForReason:options:context:completion:;
- (void)siriActivationListener:handleButtonEventFromContext:completion:;
- (void)_setupRequestListener;
- (void)setPrewarmHandler:;
- (void)setNewRequestHandler:;
- (void)setIntentHandler:;
- (void)setIntentForwardingActionHandler:;
- (void)setButtonEventHandler:;
- (void)_setupSpeechRequestListener;
- (void)_dispatchSpeechRequestOptions:;
- (void)setNewSpeechRequestHandler:;
@end
