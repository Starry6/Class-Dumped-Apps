@interface NETunnelProvider : NEProvider
@property (nonatomic) NEVPNProtocol protocolConfiguration;
@property (nonatomic) NSArray appRules;
@property (nonatomic) q routingMethod;
@property (nonatomic) BOOL reasserting;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setAppRules:;
- (id)appRules;
- (void).cxx_destruct;
- (void)handleAppMessage:completionHandler:;
- (void)setTunnelNetworkSettings:completionHandler:;
- (BOOL)reasserting;
- (void)setReasserting:;
- (long long)routingMethod;
- (id)protocolConfiguration;
- (void)setProtocolConfiguration:;
@end
