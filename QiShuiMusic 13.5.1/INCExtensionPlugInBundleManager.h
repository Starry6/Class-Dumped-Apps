@interface INCExtensionPlugInBundleManager : NSObject
- (id)init;
- (BOOL)_registerBundle:bundleIdentifier:;
- (id)_extensionPlugInBundleForIntent:bundleIdentifier:;
- (BOOL)loadBundleForBundleIdentifier:wasPrewarmed:;
- (void)_setExtensionPlugInBundle:forIntent:bundleIdentifier:;
- (void).cxx_destruct;
- (id)extensionForIntent:;
+ (id)sharedManager;
@end
