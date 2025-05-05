@interface AFSiriActivationConnection : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)_connection;
- (id)init;
- (void)dealloc;
- (void)_invalidate;
- (void)_connectionInterrupted;
- (void).cxx_destruct;
- (void)invalidate;
- (void)_connectionInvalidated;
- (id)prewarmWithRequestInfo:context:completion:;
- (id)activateWithRequestInfo:context:completion:;
- (id)deactivateForReason:options:context:completion:;
- (id)handleContext:completion:;
- (id)handleIntent:inBackgroundAppWithBundleId:reply:;
- (id)handleIntentForwardingAction:inBackgroundApplicationWithBundleIdentifier:completionHandler:;
- (id)initWithServicePort:;
@end
