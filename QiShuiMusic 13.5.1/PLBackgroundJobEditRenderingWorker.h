@interface PLBackgroundJobEditRenderingWorker : PLBackgroundJobWorker
- (BOOL)isInterruptible;
- (void)dealloc;
- (void)stopWorkingOnItem:;
- (id)workItemsNeedingProcessingInLibrary:;
- (void)performWorkOnItem:inLibrary:completion:;
- (void).cxx_destruct;
- (id)_predicateToFetchDeferredAdjustmentNeededAssets;
+ (BOOL)supportsWellKnownPhotoLibraryIdentifier:;
+ (id)workerWithLibrary:;
@end
