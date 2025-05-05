@interface SFContinuityRemoteSession : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> dispatchQueue;
@property (nonatomic) @? interruptionHandler;
@property (nonatomic) @? invalidationHandler;
@property (nonatomic) SFDevice peerDevice;
- (void)_cleanup;
- (id)init;
- (void)_run;
- (id)interruptionHandler;
- (void)dealloc;
- (void)setInterruptionHandler:;
- (id)dispatchQueue;
- (void)setDispatchQueue:;
- (id)peerDevice;
- (void)setPeerDevice:;
- (void)activateWithCompletion:;
- (void).cxx_destruct;
- (id)invalidationHandler;
- (void)setInvalidationHandler:;
- (void)invalidate;
- (void)_sfSessionStart;
- (void)sendCommand:;
- (void)sendCommand:options:;
- (void)_sendCommand:options:;
- (void)_sendQueuedMesssages;
@end
