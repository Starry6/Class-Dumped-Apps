@interface NEEthernetTunnelNetworkSettings : NEPacketTunnelNetworkSettings
@property (nonatomic) NSString ethernetAddress;
- (BOOL)checkValidityAndCollectErrors:;
- (id)descriptionWithIndent:options:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)ethernetAddress;
- (id)initWithTunnelRemoteAddress:ethernetAddress:mtu:;
- (void)setEthernetAddress:;
+ (BOOL)supportsSecureCoding;
@end
