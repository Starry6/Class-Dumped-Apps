@interface PLBackgroundJobLockedResourceWorker : PLBackgroundJobWorker
- (BOOL)isInterruptible;
- (id)initWithLibraryBundle:;
- (id)workItemsNeedingProcessingInLibrary:;
- (void)performWorkOnItem:inLibrary:completion:;
- (void).cxx_destruct;
- (BOOL)_eraseTableThumbnailAtIndex:managedObjectContext:pathManager:;
- (BOOL)_cloneResourceWithCPLResourceType:version:recipeID:resourceType:utiString:asset:destinationBundleScope:pathManager:sourceURL:destinationURL:error:;
- (BOOL)_cloneResource:asset:destinationBundleScope:pathManager:sourceURL:destinationURL:error:;
+ (BOOL)supportsWellKnownPhotoLibraryIdentifier:;
+ (void)_accessFileForAsset:cplResourceType:version:recipeID:resourceType:utiString:bundleScope:pathManager:mode:handler:;
+ (BOOL)_isRecoveringFromTransferForAsset:pathManager:mainMarkerURLIfExists:lockedMarkerURLIfExists:;
+ (BOOL)_removeFilesForAsset:inBundleScope:pathManager:;
+ (void)recoverFromInterruptedJobWithLibrary:;
@end
