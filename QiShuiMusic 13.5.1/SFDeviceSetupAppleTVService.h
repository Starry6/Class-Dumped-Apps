@interface SFDeviceSetupAppleTVService : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> dispatchQueue;
@property (nonatomic) @? progressHandler;
- (void)_cleanup;
- (void)setProgressHandler:;
- (id)progressHandler;
- (id)init;
- (void)dealloc;
- (void)_sfServiceStart;
- (id)dispatchQueue;
- (void)setDispatchQueue:;
- (void)_invalidate;
- (void)_activate;
- (void).cxx_destruct;
- (void)_handleSessionStarted:;
- (void)invalidate;
- (void)activate;
- (void)_handleSessionEnded:;
- (void)_reportProgress:info:;
- (void)_handleTVLatencyRequest:responseHandler:;
- (void)_handleFinishRequest:responseHandler:;
- (void)_handlePreAuthRequest:responseHandler:;
- (void)_handleBasicConfigRequest:responseHandler:;
- (void)_handleTVLatencyProgressEvent:info:;
@end
