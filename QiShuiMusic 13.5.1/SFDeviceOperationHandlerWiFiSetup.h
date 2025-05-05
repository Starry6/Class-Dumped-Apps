@interface SFDeviceOperationHandlerWiFiSetup : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> dispatchQueue;
@property (nonatomic) SFSession sfSession;
- (id)init;
- (void)_run;
- (id)dispatchQueue;
- (void)setDispatchQueue:;
- (void)_activate;
- (void).cxx_destruct;
- (void)invalidate;
- (void)activate;
- (id)sfSession;
- (void)setSfSession:;
- (void)_completeError:;
- (void)_handleRequestBonjourTestStart:responseHandler:;
- (void)_handleRequestBonjourTestDone:responseHandler:;
- (void)_handleWiFiSetupRequest:responseHandler:;
- (void)_runScanStart:;
- (void)_runScanResults:error:channel:;
- (void)_runJoinStart:;
- (void)_runReachabilityStart;
@end
