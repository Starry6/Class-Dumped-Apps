@interface NEIKEv2PacketTunnelProvider : NEPacketTunnelProvider
- (id)init;
- (void)dealloc;
- (void)wake;
- (void)observeValueForKeyPath:ofObject:change:context:;
- (void).cxx_destruct;
- (id)description;
- (void)setTunnelNetworkSettings:completionHandler:;
- (void)observerHelperHandler:ofObject:change:context:;
- (void)startTunnelWithOptions:completionHandler:;
- (void)stopTunnelWithReason:completionHandler:;
@end
