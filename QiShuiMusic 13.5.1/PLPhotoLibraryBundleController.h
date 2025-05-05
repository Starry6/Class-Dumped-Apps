@interface PLPhotoLibraryBundleController : NSObject
@property (nonatomic) PLBackgroundJobService backgroundJobService;
@property (nonatomic) PLCacheDeleteRegistration cacheDeleteRegistration;
- (id)init;
- (void)shutdownBundle:reason:;
- (void)setCacheDeleteRegistration:;
- (id)lookupOrCreateBundleForLibraryURL:;
- (id)libraryServicesStatusDescription;
- (void)handleUnknownMergeEvent;
- (void)setBackgroundJobService:;
- (BOOL)bindAssetsdService:toBundle:error:;
- (id)libraryBundlePaths;
- (void)_unregisterBundle:pauseUntilDate:;
- (id)cacheDeleteRegistration;
- (id)backgroundJobService;
- (id)replaceBundleForRebuildAtLibraryURL:;
- (void).cxx_destruct;
- (id)initWithBundleType:libraryServicesManagerDelegateClass:;
- (id)openBundleAtLibraryURL:;
- (void)shutdownAllBundlesWithReason:;
- (id)newPhotoLibraryBundleWithLibraryURL:;
- (id)libraryBundles;
- (id)bundleForLibraryURL:;
- (id)_lookupOrCreateBundleForLibraryURL:replaceExisting:;
+ (void)resetSharedBundleController;
+ (id)sharedBundleController;
+ (id)sharedAssetsdClientForPhotoLibraryURL:;
+ (id)_realPathForLibraryURL:;
@end
