@interface CUMobileDeviceSession : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> dispatchQueue;
@property (nonatomic) CUMobileDevice peerDevice;
@property (nonatomic) @? invalidationHandler;
@property (nonatomic) @? promptForPINHandler;
- (void)setPromptForPINHandler:;
- (id)init;
- (id)promptForPINHandler;
- (void)_invalidated;
- (id)dispatchQueue;
- (void)setDispatchQueue:;
- (id)peerDevice;
- (void)setPeerDevice:;
- (void).cxx_destruct;
- (id)invalidationHandler;
- (void)setInvalidationHandler:;
- (void)invalidate;
- (void)activate;
- (void)pairSetupWithFlags:completion:;
- (void)_pairSetupWithFlags:completion:;
- (void)pairSetupTryPIN:;
- (void)_pairSetupTryPIN:;
- (void)pairVerifyWithFlags:completion:;
- (void)_pairVerifyWithFlags:completion:;
- (void)unpairWithCompletion:;
- (void)_unpairWithCompletion:;
@end
