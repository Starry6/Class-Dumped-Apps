@interface NEPacketTunnelProvider : NETunnelProvider
@property (nonatomic) NEPacketTunnelFlow packetFlow;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void).cxx_destruct;
- (void)requestSocket:interface:local:remote:completionHandler:;
- (void)setTunnelNetworkSettings:completionHandler:;
- (void)startTunnelWithOptions:completionHandler:;
- (void)stopTunnelWithReason:completionHandler:;
- (id)initWithVirtualInterfaceType:;
- (id)createTCPConnectionThroughTunnelToEndpoint:enableTLS:TLSParameters:delegate:;
- (id)createUDPSessionThroughTunnelToEndpoint:fromEndpoint:;
- (void)cancelTunnelWithError:;
- (id)packetFlow;
- (void)setPacketFlow:;
@end
