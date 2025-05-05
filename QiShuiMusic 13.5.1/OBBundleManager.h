@interface OBBundleManager : NSObject
- (id)orderedPrivacyBundles;
- (id)allBundles;
- (id)_providersByBundleNames;
- (id)orderedPrivacyBundlesWithPrivacyPaneBundle:;
- (id)bundleWithIdentifier:;
- (id)_bundleSearchPath;
- (id)_allPrivacyBundles;
- (id)bundlesWithIdentifiers:;
+ (id)sharedManager;
@end
