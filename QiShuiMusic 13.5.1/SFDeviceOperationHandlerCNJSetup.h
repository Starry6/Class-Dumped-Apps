@interface SFDeviceOperationHandlerCNJSetup : NSObject
@property (nonatomic) SFSession sfSession;
@property (nonatomic) NSObject<OS_dispatch_queue> dispatchQueue;
- (id)init;
- (id)dispatchQueue;
- (void)setDispatchQueue:;
- (void).cxx_destruct;
- (void)invalidate;
- (void)activate;
- (id)sfSession;
- (void)setSfSession:;
- (void)_updateCaptiveState;
- (void)_runReachability:responseHandler:;
- (void)_handleCaptiveJoinRequestWithResponseHandler:;
@end
