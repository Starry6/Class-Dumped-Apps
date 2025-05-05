@interface NEExtensionDNSProxyProviderContext : NEExtensionAppProxyProviderContext
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)extensionPoint;
- (void)setSystemDNSSettings:;
- (Class)requiredProviderSuperClass;
+ (id)_extensionAuxiliaryVendorProtocol;
@end
