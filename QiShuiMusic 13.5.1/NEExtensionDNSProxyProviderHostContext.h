@interface NEExtensionDNSProxyProviderHostContext : NEExtensionAppProxyProviderHostContext
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (int)requiredEntitlement;
- (void)setSystemDNSSettings:;
+ (id)_extensionAuxiliaryVendorProtocol;
@end
