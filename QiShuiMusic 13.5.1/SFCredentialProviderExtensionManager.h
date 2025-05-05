@interface SFCredentialProviderExtensionManager : NSObject
@property (nonatomic) NSSet extensions;
@property (nonatomic) NSSet extensionsSync;
@property (nonatomic) NSExtension primaryExtension;
@property (nonatomic) NSExtension primaryExtensionSync;
- (id)extensions;
- (void)removeObserver:;
- (id)_extensions;
- (id)init;
- (void)addObserver:;
- (void)dealloc;
- (id)primaryExtensionSync;
- (void)setExtension:isEnabled:;
- (void)getPrimaryExtensionWithCompletion:;
- (void)_updateExtensions:;
- (BOOL)extensionIsEnabled:;
- (id)extensionsSync;
- (void).cxx_destruct;
- (void)_beginExtensionDiscovery;
- (void)_endExtensionDiscovery;
- (BOOL)shouldShowConfigurationUIForEnablingExtension:;
- (id)displayNameForExtension:;
- (void)_notifyObservers:;
- (id)primaryExtension;
+ (id)sharedManager;
@end
