@interface NEPacketTunnelNetworkSettings : NETunnelNetworkSettings
@property (nonatomic) NEIPv4Settings IPv4Settings;
@property (nonatomic) NEIPv6Settings IPv6Settings;
@property (nonatomic) NSNumber tunnelOverheadBytes;
@property (nonatomic) NSNumber MTU;
- (BOOL)checkValidityAndCollectErrors:;
- (id)initFromLegacyDictionary:;
- (id)descriptionWithIndent:options:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:;
- (void)setMTU:;
- (id)IPv4Settings;
- (void)setIPv4Settings:;
- (id)IPv6Settings;
- (void)setIPv6Settings:;
- (id)tunnelOverheadBytes;
- (void)setTunnelOverheadBytes:;
- (id)MTU;
+ (BOOL)supportsSecureCoding;
@end
