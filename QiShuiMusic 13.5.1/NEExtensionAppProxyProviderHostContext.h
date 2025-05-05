@interface NEExtensionAppProxyProviderHostContext : NEExtensionTunnelProviderHostContext
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (int)requiredEntitlement;
- (void)setDelegateInterface:;
- (void)setInitialFlowDivertControlSocket:;
- (void)openFlowDivertControlSocketWithCompletionHandler:;
+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;
@end
