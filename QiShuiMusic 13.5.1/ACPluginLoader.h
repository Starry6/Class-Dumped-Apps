@interface ACPluginLoader : NSObject
+ (id)pluginBundlesAtSubpath:;
+ (id)_accountsPluginDirectoryURLs:inAppleInternal:;
+ (id)_validatedBundleAtURL:;
+ (void)_populatePluginBundles:atSubpath:inAppleInternal:;
+ (id)_pluginWithName:inSubpath:inAppleInternal:;
+ (id)pluginWithName:inSubpath:;
@end
