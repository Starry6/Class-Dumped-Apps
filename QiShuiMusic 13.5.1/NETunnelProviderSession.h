@interface NETunnelProviderSession : NEVPNConnection
- (BOOL)startTunnelWithOptions:andReturnError:;
- (void)stopTunnel;
- (BOOL)sendProviderMessage:returnError:responseHandler:;
@end
