@interface AFSiriActivationListener : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (void)stop;
- (void)_stop;
- (void)_invalidate;
- (BOOL)listener:shouldAcceptNewConnection:;
- (void).cxx_destruct;
- (void)notifyObserver:didChangeStateFrom:to:;
- (void)invalidate;
- (id)prewarmWithRequestInfo:context:completion:;
- (id)activateWithRequestInfo:context:completion:;
- (id)deactivateForReason:options:context:completion:;
- (id)handleContext:completion:;
- (id)handleIntent:inBackgroundAppWithBundleId:reply:;
- (id)handleIntentForwardingAction:inBackgroundApplicationWithBundleIdentifier:completionHandler:;
- (id)initWithServicePort:;
- (void)startWithDelegate:;
- (void)_startWithDelegate:;
- (void)_prewarmWithRequestInfo:context:completion:;
- (void)_activateWithRequestInfo:context:completion:;
- (void)_deactivateForReason:options:context:completion:;
- (void)_deliverButtonEventFromContext:completion:;
- (void)_myriadEventWithRequestInfo:context:completion:;
@end
