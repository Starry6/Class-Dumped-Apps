@interface NEVPNProtocolPPP : NEVPNProtocol
@property (nonatomic) q authenticationMethod;
@property (nonatomic) BOOL verboseLoggingEnabled;
@property (nonatomic) NEIPv4Settings IPv4Settings;
@property (nonatomic) NEIPv6Settings IPv6Settings;
- (BOOL)checkValidityAndCollectErrors:;
- (id)initFromLegacyDictionary:;
- (id)descriptionWithIndent:options:;
- (id)copyLegacyDictionary;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithType:;
- (id)copyWithZone:;
- (long long)authenticationMethod;
- (id)IPv4Settings;
- (void)setIPv4Settings:;
- (id)IPv6Settings;
- (void)setIPv6Settings:;
- (BOOL)setServiceProtocolsInService:;
- (BOOL)updateWithServiceProtocolsFromService:;
- (void)setAuthenticationMethod:;
- (id)copyLegacyDictionaryComplete:;
- (BOOL)verboseLoggingEnabled;
- (void)setVerboseLoggingEnabled:;
+ (BOOL)supportsSecureCoding;
@end
