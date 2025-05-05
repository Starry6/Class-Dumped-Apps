@interface NETransparentProxyNetworkSettings : NETunnelNetworkSettings
@property (nonatomic) BOOL isFullyTransparent;
@property (nonatomic) NSArray includedNetworkRules;
@property (nonatomic) NSArray excludedNetworkRules;
- (BOOL)checkValidityAndCollectErrors:;
- (id)descriptionWithIndent:options:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)includedNetworkRules;
- (void)setIncludedNetworkRules:;
- (id)excludedNetworkRules;
- (void)setExcludedNetworkRules:;
- (BOOL)isFullyTransparent;
- (void)setIsFullyTransparent:;
+ (BOOL)supportsSecureCoding;
@end
