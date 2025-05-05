@interface RPExtensionHostContext : NSExtensionContext
- (void)didConnectToVendor:;
+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;
@end
