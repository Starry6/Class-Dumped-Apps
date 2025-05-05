@interface CLSContextProviderExtensionContext : NSExtensionContext
- (void)updateDescendantsOfContext:completion:;
- (void)getMainAppContextPathWithCompletion:;
- (void)updateDescendantsOfContextPath:completion:;
+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;
@end
