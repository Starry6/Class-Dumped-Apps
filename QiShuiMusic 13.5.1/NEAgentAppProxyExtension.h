@interface NEAgentAppProxyExtension : NEAgentTunnelExtension
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setDelegateInterface:;
- (id)managerInterface;
- (void)connectWithParameters:;
- (id)driverInterface;
- (void)extension:didRequestFlowDivertControlSocketWithCompletionHandler:;
@end
