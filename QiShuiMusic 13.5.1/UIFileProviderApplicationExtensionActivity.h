@interface UIFileProviderApplicationExtensionActivity : UIApplicationExtensionActivity
@property (nonatomic) LSPlugInKitProxy pluginProxy;
@property (nonatomic) NSArray groupContainerURLs;
- (void).cxx_destruct;
- (id)groupContainerURLs;
- (BOOL)canPerformWithActivityItems:;
- (id)initWithApplicationExtension:;
- (BOOL)_sharesGroupContainerWithURL:;
- (id)pluginProxy;
- (void)setPluginProxy:;
- (void)setGroupContainerURLs:;
@end
