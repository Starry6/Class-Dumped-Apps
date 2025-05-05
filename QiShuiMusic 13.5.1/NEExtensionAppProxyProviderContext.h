@interface NEExtensionAppProxyProviderContext : NEExtensionTunnelProviderContext
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setDelegateInterface:;
- (void)startWithOptions:completionHandler:;
- (id)extensionPoint;
- (void)cancelWithError:;
- (void).cxx_destruct;
- (void)setInitialFlowDivertControlSocket:;
- (void)stopWithReason:;
- (void)openFlowDivertControlSocketWithCompletionHandler:;
- (Class)requiredProviderSuperClass;
+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;
@end
