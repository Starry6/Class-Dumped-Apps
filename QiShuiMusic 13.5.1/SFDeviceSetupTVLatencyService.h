@interface SFDeviceSetupTVLatencyService : NSObject
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
- (void)_handleFinishRequest:responseHandler:;
- (void)_handleTVLatencyProgressEvent:info:;
@end
