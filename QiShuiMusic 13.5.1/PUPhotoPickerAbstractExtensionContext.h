@interface PUPhotoPickerAbstractExtensionContext : NSExtensionContext
- (id)proxy;
- (id)principalObject;
- (void)firstPayloadFromExtensionItems:completion:;
- (void)invalidateContext;
+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_allowedItemPayloadClasses;
+ (id)_extensionAuxiliaryVendorProtocol;
@end
