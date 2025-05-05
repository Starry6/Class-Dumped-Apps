@interface NETunnelNetworkSettings : NSObject
@property (nonatomic) NSString tunnelRemoteAddress;
@property (nonatomic) NEDNSSettings DNSSettings;
@property (nonatomic) NEProxySettings proxySettings;
- (BOOL)checkValidityAndCollectErrors:;
- (id)initFromLegacyDictionary:;
- (id)descriptionWithIndent:options:;
- (id)initWithCoder:;
- (id)proxySettings;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)initWithTunnelRemoteAddress:;
- (id)tunnelRemoteAddress;
- (id)DNSSettings;
- (void)setDNSSettings:;
- (void)setProxySettings:;
+ (BOOL)supportsSecureCoding;
@end
