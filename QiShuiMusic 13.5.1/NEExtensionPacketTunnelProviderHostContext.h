@interface NEExtensionPacketTunnelProviderHostContext : NEExtensionTunnelProviderHostContext
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (int)requiredEntitlement;
- (void)validateWithCompletionHandler:;
- (void)setAppUUIDMap:;
- (void)fetchVirtualInterfaceTypeWithCompletionHandler:;
- (void)setupVirtualInterface:;
- (void)requestSocket:interface:local:remote:completionHandler:;
+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;
@end
