@interface INExecutionFrameworkMapper : NSObject
@property (nonatomic) NSMutableDictionary _appToExtensionIdentifiers;
@property (nonatomic) BOOL _filled;
@property (nonatomic) {os_unfair_lock_s=I} _lock;
- (id)_lock;
- (id)init;
- (void)dealloc;
- (id)_appToExtensionIdentifiers;
- (void)installedApplicationsDidChange:;
- (void)_addExtensionBundleIdentifier:forAppBundleIdentifier:;
- (id)extensionBundleIdentifiersForSystemAppIdentifier:;
- (id)appBundleIdentifierForSystemExtensionBundleIdentifier:;
- (void).cxx_destruct;
- (void)reset;
- (BOOL)_filled;
- (void)loadSystemExtensionInformation;
- (id)launchableAppBundleIdentifierForSystemExtensionBundleIdentifier:;
- (id)displayableAppBundleIdentifierForSystemExtensionBundleIdentifier:;
@end
