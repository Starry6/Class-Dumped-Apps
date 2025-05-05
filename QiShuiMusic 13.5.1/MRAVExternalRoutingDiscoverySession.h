@interface MRAVExternalRoutingDiscoverySession : MRAVRoutingDiscoverySession
@property (nonatomic) MRAVEndpoint destination;
@property (nonatomic) MRExternalDevice externalDevice;
- (void)setDiscoveryMode:;
- (unsigned int)endpointFeatures;
- (void)setDestination:;
- (void)dealloc;
- (unsigned int)discoveryMode;
- (BOOL)devicePresenceDetected;
- (id)destination;
- (id)availableOutputDevices;
- (id)debugDescription;
- (void)setExternalDevice:;
- (id)destinationOutputDeviceUID;
- (void).cxx_destruct;
- (id)externalDevice;
- (id)description;
- (id)availableEndpoints;
- (id)initWithConfiguration:;
@end
