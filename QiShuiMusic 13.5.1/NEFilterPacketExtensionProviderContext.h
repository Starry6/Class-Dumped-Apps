@interface NEFilterPacketExtensionProviderContext : NEFilterExtensionProviderContext
- (void)dealloc;
- (id)extensionPoint;
- (void).cxx_destruct;
- (void)stopWithReason:;
- (Class)requiredProviderSuperClass;
- (void)startFilterWithOptions:completionHandler:;
+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;
@end
