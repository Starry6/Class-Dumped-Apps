@interface NEExtensionPacketTunnelProviderContext : NEExtensionTunnelProviderContext
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dispose;
- (void)startWithOptions:completionHandler:;
- (id)extensionPoint;
- (void)stopWithReason:;
- (void)setTunnelConfiguration:completionHandler:;
- (Class)requiredProviderSuperClass;
- (void)setAppUUIDMap:;
- (void)fetchVirtualInterfaceTypeWithCompletionHandler:;
- (void)setupVirtualInterface:;
- (void)requestSocket:interface:local:remote:completionHandler:;
- (void)completeSession;
+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;
@end
