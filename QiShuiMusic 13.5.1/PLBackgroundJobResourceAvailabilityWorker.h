@interface PLBackgroundJobResourceAvailabilityWorker : PLBackgroundJobWorker
- (BOOL)isInterruptible;
- (void)stopWorkingOnItem:;
- (id)deferredPhotoFinalizer;
- (id)initWithLibraryBundle:;
- (id)workItemsNeedingProcessingInLibrary:;
- (void)performWorkOnItem:inLibrary:completion:;
- (id)imageConversionClient;
- (void).cxx_destruct;
- (id)videoConversionClient;
- (BOOL)avoidCheckingOtherWorkersIfThisWorkerHasPendingWork;
+ (BOOL)supportsWellKnownPhotoLibraryIdentifier:;
@end
