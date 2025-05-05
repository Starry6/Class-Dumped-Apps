@interface FBSExtensionInfo : FBSBundleInfo
@property (nonatomic) NSString typeIdentifier;
@property (nonatomic) NSString extensionIdentifier;
- (id)extensionIdentifier;
- (id)typeIdentifier;
- (void).cxx_destruct;
- (id)_initWithBundleIdentifier:url:;
- (id)_initWithBundleProxy:url:;
- (id)_initWithPlugInKitProxy:;
@end
