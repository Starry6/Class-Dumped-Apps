@interface MRAVRoutingDiscoverySessionOperation : NSObject
@property (nonatomic) NSArray outputDeviceUIDs;
@property (nonatomic) @? outputDeviceDiscoveredHandler;
@property (nonatomic) @? endpointDiscoveredHandler;
@property (nonatomic) @? finishHandler;
@property (nonatomic) NSObject<OS_dispatch_queue> dispatchQueue;
- (void)_finishWithError:;
- (void)cancel;
- (id)dispatchQueue;
- (void)setDispatchQueue:;
- (id)finishHandler;
- (void)cancelWithError:;
- (void).cxx_destruct;
- (void)setFinishHandler:;
- (id)outputDeviceUIDs;
- (id)initWithOutputDeviceUIDs:;
- (void)setEndpointDiscoveredHandler:;
- (id)endpointDiscoveredHandler;
- (void)setOutputDeviceDiscoveredHandler:;
- (id)outputDeviceDiscoveredHandler;
- (void)executeWithTimeout:;
- (void)_notifyDiscoveredEndpoint:outputDevice:forTargetOutputDevice:;
@end
