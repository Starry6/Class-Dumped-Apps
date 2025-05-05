@interface CTCategories : NSObject
@property (nonatomic) NSArray availableCategoryIDs;
- (id)init;
- (void)dealloc;
- (void)categoryForBundleID:platform:completionHandler:;
- (id)bundleIDForPlatform:fromBundleID:platform:;
- (void)categoriesForDomainURLs:completionHandler:;
- (void)unCategorizedDomainsFromDomains:withCompletionHandler:;
- (void)categoriesForBundleIDs:completionHandler:;
- (void)categoriesForDomainNames:completionHandler:;
- (void)categoryForDomainURL:completionHandler:;
- (void)_emptySharedCache:;
- (void)categoriesForBundleIDs:platform:completionHandler:;
- (void)categoryForDomainName:completionHandler:;
- (void).cxx_destruct;
- (id)availableCategoryIDs;
- (void)emptyCache;
- (void)categoryForBundleID:completionHandler:;
+ (id)systemUnblockableBundleIdentifiersForDeviceFamily:;
+ (id)systemHiddenBundleIdentifiersForDeviceFamily:;
+ (id)supportedWebBrowserBundleIdentifiersForDeviceFamily:;
+ (id)sharedCategories;
+ (id)systemBlockableBundleIdentifiersForDeviceFamily:;
+ (long long)currentIOSDevice;
@end
