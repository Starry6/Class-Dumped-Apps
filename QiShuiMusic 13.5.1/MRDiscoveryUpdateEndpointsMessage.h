@interface MRDiscoveryUpdateEndpointsMessage : MRProtocolMessage
@property (nonatomic) NSArray endpoints;
@property (nonatomic) MRAVRoutingDiscoverySessionConfiguration configuration;
- (id)endpoints;
- (unsigned long long)type;
- (id)configuration;
- (void).cxx_destruct;
- (id)initWithUnderlyingCodableMessage:error:;
- (id)initWithEndpoints:configuration:;
@end
