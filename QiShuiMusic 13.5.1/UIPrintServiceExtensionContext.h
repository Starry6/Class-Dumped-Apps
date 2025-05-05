@interface UIPrintServiceExtensionContext : NSExtensionContext
- (id)init;
- (void)dealloc;
- (void)_gatherPrintersForPrintInfo:reply:;
+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;
@end
