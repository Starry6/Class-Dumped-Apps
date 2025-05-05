@interface MPAVEndpointRoutingDataSource : MPAVRoutingDataSource
@property (nonatomic) NSObject<OS_dispatch_queue> serialQueue;
@property (nonatomic) NSMutableDictionary endpoints;
@property (nonatomic) MRAVRoutingDiscoverySessionConfiguration discoverySessionConfiguration;
@property (nonatomic) NSString routingContextUID;
- (void)setDiscoveryMode:;
- (id)getRoutesForCategory:;
- (id)routingContextUID;
- (void)setEndpoints:;
- (void)setRoutingContextUID:;
- (void)setTargetSessionID:;
- (void)setPickedRoute:withPassword:completion:;
- (id)init;
- (unsigned int)targetSessionID;
- (id)endpoints;
- (void)dealloc;
- (long long)discoveryMode;
- (BOOL)devicePresenceDetected;
- (id)serialQueue;
- (id)initWithThrottlingEnabled:;
- (void).cxx_destruct;
- (void)setSerialQueue:;
- (id)discoverySessionConfiguration;
- (void)_endpointsDidChange:;
@end
