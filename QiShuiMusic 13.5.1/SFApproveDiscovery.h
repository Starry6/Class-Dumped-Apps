@interface SFApproveDiscovery : NSObject
@property (nonatomic) NSArray devices;
@property (nonatomic) NSObject<OS_dispatch_queue> dispatchQueue;
@property (nonatomic) @? deviceFoundHandler;
@property (nonatomic) @? deviceLostHandler;
@property (nonatomic) @? invalidationHandler;
- (id)deviceFoundHandler;
- (void)setDeviceFoundHandler:;
- (void)setDeviceLostHandler:;
- (void)setDevices:;
- (id)init;
- (void)_invalidated;
- (id)dispatchQueue;
- (id)devices;
- (void)_activateWithCompletion:;
- (void)setDispatchQueue:;
- (void)activateWithCompletion:;
- (void).cxx_destruct;
- (id)invalidationHandler;
- (void)setInvalidationHandler:;
- (id)deviceLostHandler;
- (void)invalidate;
- (void)_activatedWithError:;
- (void)_discoveryEnsureStarted;
- (void)_discoveryEnsureStopped;
- (void)_discoveryFoundDevice:;
- (void)_discoveryDeviceChanged:;
- (void)_discoveryLostDevice:;
@end
