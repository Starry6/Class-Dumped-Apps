@interface NEDNSOverTLSSettings : NEDNSSettings
@property (nonatomic) NSString serverName;
@property (nonatomic) NSData identityReference;
- (id)initFromLegacyDictionary:;
- (id)descriptionWithIndent:options:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (long long)dnsProtocol;
- (id)serverName;
- (void)setServerName:;
- (id)identityReference;
- (void)setIdentityReference:;
+ (BOOL)supportsSecureCoding;
@end
