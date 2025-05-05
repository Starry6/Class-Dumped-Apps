@interface SFShareAudioService : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> dispatchQueue;
@property (nonatomic) SDStatusMonitor statusMonitor;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)statusMonitor;
- (id)init;
- (void)_sfServiceStart;
- (id)dispatchQueue;
- (void)_handleSessionEnded:error:;
- (void)_handleShareAudioResponse:error:;
- (void)_handleShareAudioRequest:responseHandler:;
- (void)setDispatchQueue:;
- (void)_handleShareAudioSearchTimeout;
- (void)setStatusMonitor:;
- (void)_invalidate;
- (void)_handleShareAudioRequest2:contact:responseHandler:;
- (void)_handleShareAudioFoundDevice:;
- (void).cxx_destruct;
- (void)_handleShareAudioPairingCompleted:error:;
- (void)_handleSessionStarted:;
- (void)invalidate;
- (void)xpcPerformAction:completion:;
- (void)activate;
@end
