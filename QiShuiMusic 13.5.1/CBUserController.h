@interface CBUserController : NSObject
@property (nonatomic) NSXPCListenerEndpoint testListenerEndpoint;
@property (nonatomic) NSObject<OS_dispatch_queue> dispatchQueue;
@property (nonatomic) @? interruptionHandler;
@property (nonatomic) @? invalidationHandler;
- (void)setTestListenerEndpoint:;
- (id)init;
- (id)interruptionHandler;
- (id)testListenerEndpoint;
- (void)_invalidated;
- (void)setInterruptionHandler:;
- (id)dispatchQueue;
- (void)setDispatchQueue:;
- (void)_interrupted;
- (BOOL)_ensureXPCStarted;
- (void).cxx_destruct;
- (id)invalidationHandler;
- (void)setInvalidationHandler:;
- (void)invalidate;
- (void)appleAudioAccessoryLimitedLoggingWithCompletion:;
- (void)setAppleAudioAccessoryLimitedLogging:completion:;
- (void)getDistributedLoggingStatusWithCompletion:;
- (void)setDistributedLoggingStatus:completion:;
- (void)getCurrentUserGivenNameWithCompletion:;
@end
