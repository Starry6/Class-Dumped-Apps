@interface PLBackgroundJobDeferredRenderDerivativesBaseWorker : PLBackgroundJobWorker
- (BOOL)isInterruptible;
- (id)_predicateToFetchDeferredAssets;
- (void)stopWorkingOnItem:;
- (id)workItemsNeedingProcessingInLibrary:;
- (void)performWorkOnItem:inLibrary:completion:;
- (id)imageConversionClient;
- (void).cxx_destruct;
- (id)videoConversionClient;
+ (id)_criteriaToUse;
+ (BOOL)supportsWellKnownPhotoLibraryIdentifier:;
@end
