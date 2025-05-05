@interface PLBackgroundJobSyndicationAssetCleanupWorker : PLBackgroundJobWorker
- (BOOL)isInterruptible;
- (void)stopWorkingOnItem:;
- (id)workItemsNeedingProcessingInLibrary:;
- (void)performWorkOnItem:inLibrary:completion:;
+ (BOOL)supportsWellKnownPhotoLibraryIdentifier:;
@end
