@interface DOCRemoteContext : NSExtensionContext
- (id)serviceProxyWithErrorHandler:;
- (void)updateAppearance:completionBlock:;
- (void)updateAppearance:shouldFlushCA:completionBlock:;
- (void)updateEditingTo:animated:;
+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;
@end
