@interface NPTunnelFlowTelemetry : NPTunnelFlowHTTP
- (void)handleTunnelConnected;
- (BOOL)isBestEffort;
- (id)initWithTunnel:service:postURL:;
- (void)reportTelemetry:;
@end
