@interface RPLegacySession : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> dispatchQueue;
@property (nonatomic) NSString label;
@property (nonatomic) RPDevice peerDevice;
@property (nonatomic) I securityFlags;
@property (nonatomic) NSString serviceType;
@property (nonatomic) @? errorHandler;
@property (nonatomic) @? interruptionHandler;
@property (nonatomic) @? invalidationHandler;
@property (nonatomic) @? promptForPINHandler;
- (void)_cleanup;
- (void)setPromptForPINHandler:;
- (id)init;
- (id)promptForPINHandler;
- (void)_run;
- (id)interruptionHandler;
- (void)dealloc;
- (id)errorHandler;
- (void)_invalidated;
- (void)setInterruptionHandler:;
- (id)dispatchQueue;
- (id)serviceType;
- (void)_activateWithCompletion:;
- (void)setDispatchQueue:;
- (id)peerDevice;
- (void)setServiceType:;
- (void)setLabel:;
- (id)label;
- (void)setPeerDevice:;
- (void)setErrorHandler:;
- (void)activateWithCompletion:;
- (void)_invalidate;
- (void).cxx_destruct;
- (id)invalidationHandler;
- (void)setInvalidationHandler:;
- (void)invalidate;
- (void)_sendMessage:;
- (void)registerRequestID:options:handler:;
- (void)sendRequestID:options:request:responseHandler:;
- (void)pairSetupWithFlags:completion:;
- (void)_pairSetupWithFlags:completion:;
- (void)pairSetupTryPIN:;
- (void)_pairSetupTryPIN:;
- (void)pairVerifyWithFlags:completion:;
- (void)_pairVerifyWithFlags:completion:;
- (void)unpairWithCompletion:;
- (void)_unpairWithCompletion:;
- (int)_runPairVerify;
- (int)_runMobileDeviceStart;
- (void)_sendQueuedMessages;
- (void)requestSystemInfoWithCompletion:;
- (unsigned int)securityFlags;
- (void)setSecurityFlags:;
@end
