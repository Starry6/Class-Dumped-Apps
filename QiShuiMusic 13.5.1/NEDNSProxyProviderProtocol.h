@interface NEDNSProxyProviderProtocol : NEVPNProtocol
@property (nonatomic) NSString pluginType;
@property (nonatomic) NSString designatedRequirement;
@property (nonatomic) NSDictionary providerConfiguration;
@property (nonatomic) NSString providerBundleIdentifier;
- (BOOL)checkValidityAndCollectErrors:;
- (id)init;
- (id)descriptionWithIndent:options:;
- (id)pluginType;
- (id)initWithCoder:;
- (id)providerConfiguration;
- (id)initWithPluginType:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)providerBundleIdentifier;
- (id)designatedRequirement;
- (void)setProviderConfiguration:;
- (void)setProviderBundleIdentifier:;
- (void)setPluginType:;
- (void)setDesignatedRequirement:;
+ (BOOL)supportsSecureCoding;
@end
