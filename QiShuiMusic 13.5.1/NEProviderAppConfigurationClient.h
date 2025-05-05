@interface NEProviderAppConfigurationClient : NEUtilConfigurationClient
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)enabled;
- (BOOL)isAlwaysOn;
- (void)setEnabled:;
- (BOOL)listener:shouldAcceptNewConnection:;
- (void).cxx_destruct;
- (id)filterConfiguration;
- (id)onDemandRules;
- (void)setOnDemandRules:;
- (void)handleConfigChanged:;
- (void)handleCommand:forConfigWithName:withParameters:completionHandler:;
- (id)initWithClientName:;
- (BOOL)onDemandEnabled;
- (void)setOnDemandEnabled:;
- (id)protocolForParameters:;
- (id)dnsProxyConfiguration;
- (id)dnsSettingsBundle;
- (BOOL)createConfigurationWithParameters:errorStr:;
- (BOOL)setProtocolWithParameters:errorStr:;
- (BOOL)setPasswordWithParameters:errorStr:;
- (BOOL)unsetPasswordWithParameters:errorStr:;
- (BOOL)setSharedSecretWithParameters:errorStr:;
- (BOOL)unsetSharedSecretWithParameters:errorStr:;
- (BOOL)setProviderTypeWithParameters:errorStr:;
@end
