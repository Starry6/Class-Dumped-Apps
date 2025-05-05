@interface MRIDSCompanionDiscoverySession : MRAVRoutingDiscoverySession
@property (nonatomic) MRProtocolClientConnection discoveryChannel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setDiscoveryMode:;
- (unsigned int)endpointFeatures;
- (id)init;
- (unsigned int)discoveryMode;
- (BOOL)devicePresenceDetected;
- (id)availableOutputDevices;
- (void)clientConnection:didReceiveMessage:;
- (id)debugDescription;
- (void)_handleCompanionDeviceDidConnectNotification:;
- (void)_handleCompanionDeviceDisconnectedNotification:;
- (void)_onIDSQueue_initializeDiscoveryChannel;
- (void)_onIDSQueue_disconnectDiscoveryChannel:;
- (void).cxx_destruct;
- (id)discoveryChannel;
- (void)setDiscoveryChannel:;
- (id)availableEndpoints;
- (void)_onIDSQueue_connectDiscoveryChannel:;
- (void)handleUpdateOutputDevicesMessage:forClient:;
- (id)initWithConfiguration:;
- (void)_syncClientStateToConnection:;
@end
