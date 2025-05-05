@interface NEAgentPacketTunnelExtension : NEAgentTunnelExtension
- (void)setAppUUIDMap:;
- (void)extension:didSetTunnelConfiguration:completionHandler:;
- (void)handleExtensionStartedWithCompletionHandler:;
@end
