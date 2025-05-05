@interface INCExtensionManager : NSObject
- (id)init;
- (void)killExtension:requestIdentifier:afterTimeout:;
- (void)fetchExtensionForIntent:extensionInputItems:requiresTCC:completion:;
- (void)_resetKillTimerForExtensionWithBundleIdentifier:;
- (void).cxx_destruct;
- (void)_killExtensionWithBundleIdentifier:;
- (BOOL)isExtensionLoadedForExtensionBundleIdentifier:;
- (void)_manageExtension:requestIdentifier:;
+ (id)sharedManager;
@end
