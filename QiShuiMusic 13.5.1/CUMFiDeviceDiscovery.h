@interface CUMFiDeviceDiscovery : NSObject
@property (nonatomic) @? deviceFoundHandler;
@property (nonatomic) @? deviceLostHandler;
@property (nonatomic) NSObject<OS_dispatch_queue> dispatchQueue;
@property (nonatomic) @? interruptionHandler;
@property (nonatomic) @? invalidationHandler;
@property (nonatomic) NSString label;
- (id)deviceFoundHandler;
- (void)setDeviceFoundHandler:;
- (void)setDeviceLostHandler:;
- (id)init;
- (id)interruptionHandler;
- (void)dealloc;
- (void)setInterruptionHandler:;
- (id)dispatchQueue;
- (void)setDispatchQueue:;
- (void)setLabel:;
- (id)label;
- (void)_invalidate;
- (void)_activate;
- (void).cxx_destruct;
- (id)invalidationHandler;
- (void)setInvalidationHandler:;
- (id)deviceLostHandler;
- (void)invalidate;
- (void)activate;
- (void)_eaAccessoryDidConnect:;
- (void)_eaAccessoryDidDisconnect:;
@end
