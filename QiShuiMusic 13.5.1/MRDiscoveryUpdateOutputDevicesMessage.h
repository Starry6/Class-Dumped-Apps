@interface MRDiscoveryUpdateOutputDevicesMessage : MRProtocolMessage
@property (nonatomic) NSArray outputDevices;
@property (nonatomic) MRAVRoutingDiscoverySessionConfiguration configuration;
- (id)outputDevices;
- (unsigned long long)type;
- (id)configuration;
- (void).cxx_destruct;
- (id)initWithUnderlyingCodableMessage:error:;
- (id)initWithOutputDevices:configuration:;
@end
