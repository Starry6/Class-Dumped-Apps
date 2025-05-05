@interface PHPersonResetOperation : NSOperation
- (BOOL)isAsynchronous;
- (void)main;
- (void).cxx_destruct;
- (id)initWithPersonsToDelete:facesToDelete:shouldDeleteAllFaceCrops:shouldResetPhotoAnalysis:batchSize:photoLibrary:progressHandler:completionHandler:;
- (void)_enumerateFetchResult:withBatchSize:handler:;
- (void)_prepareToDeleteFaceCrops;
+ (id)resetOperationsForPersons:batchSize:photoLibrary:progressHandler:completionHandler:;
+ (id)resetAllPersonsOperationWithBatchSize:shouldResetPhotoAnalysis:photoLibrary:progressHandler:completionHandler:;
@end
