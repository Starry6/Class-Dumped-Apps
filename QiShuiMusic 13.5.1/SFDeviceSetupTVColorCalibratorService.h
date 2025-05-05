@interface SFDeviceSetupTVColorCalibratorService : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> dispatchQueue;
@property (nonatomic) @? progressHandler;
- (void)setProgressHandler:;
- (id)progressHandler;
- (id)init;
- (void)_sfServiceStart;
- (id)dispatchQueue;
- (void)setDispatchQueue:;
- (void)_invalidate;
- (void).cxx_destruct;
- (void)_handleSessionStarted:;
- (void)invalidate;
- (void)activate;
- (void)_handleSessionEnded:;
- (void)_reportProgress:info:;
- (void)sendSetupAction:info:responseHandler:;
- (void)_handleTVLatencyRequest:responseHandler:;
- (void)_handleTVColorCalibratorProgressEvent:info:;
- (void)_handleFinishRequest:responseHandler:;
@end
