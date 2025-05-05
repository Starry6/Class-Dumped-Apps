@interface CXProviderExtensionContext : NSExtensionContext
@property (nonatomic) @ remoteObjectProxy;
- (id)remoteObjectProxy;
- (id)remoteObjectProxyWithErrorHandler:;
+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;
@end
