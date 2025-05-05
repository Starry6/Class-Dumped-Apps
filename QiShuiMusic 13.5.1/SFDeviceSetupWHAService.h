@interface SFDeviceSetupWHAService : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> dispatchQueue;
@property (nonatomic) BOOL needsCDPRepair;
@property (nonatomic) @? progressHandler;
- (void)_cleanup;
- (void)setProgressHandler:;
- (id)progressHandler;
- (id)init;
- (void)dealloc;
- (void)_sfServiceStart;
- (id)dispatchQueue;
- (void)setDispatchQueue:;
- (void).cxx_destruct;
- (void)_handleSessionStarted:;
- (void)invalidate;
- (void)activate;
- (void)_handleSessionEnded:;
- (void)_handleInfoExchange:responseHandler:;
- (void)_handleRequest:flags:session:responseHandler:;
- (BOOL)needsCDPRepair;
- (void)setNeedsCDPRepair:;
@end
