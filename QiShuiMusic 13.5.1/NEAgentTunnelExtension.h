@interface NEAgentTunnelExtension : NEAgentExtension
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)managerInterface;
- (void)disconnectWithReason:;
- (void)connectWithParameters:;
- (void)attachIPCWithCompletionHandler:;
- (void)setAppUUIDMap:;
- (id)driverInterface;
- (void)extension:didStartWithError:;
- (void)extension:didSetStatus:;
- (void)extension:didSetTunnelConfiguration:completionHandler:;
- (void)extensionDidDetachIPC:;
- (void)extension:didRequestSocket:interface:local:remote:effectivePID:completionHandler:;
- (void)handleCancel;
- (void)handleAppsUninstalled:;
- (void)handleAppsUpdateBegins:;
- (void)handleAppsUpdateEnding:;
- (void)handleAppsUpdateEnds:;
- (void)handleExtensionStartedWithCompletionHandler:;
- (void)sendExtensionFailed;
@end
