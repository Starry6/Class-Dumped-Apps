@interface PLBackgroundJobSyndicationSyncWorker : PLBackgroundJobWorker
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)_syndicationStartingDateInLibrary:;
- (BOOL)isInterruptible;
- (BOOL)_hasPendingAttachmentJobsInLibrary:;
- (BOOL)_needsSyndicationFullIndexSyncInLibrary:;
- (BOOL)_hasPendingDeleteJobsInLibrary:;
- (void)stopWorkingOnItem:;
- (BOOL)_supportsSyndicationQueryType:;
- (id)_workItemsBatchedFromDate:type:;
- (void)executeQueryForSyncManager:type:startDate:endDate:itemHandler:completionHandler:;
- (id)initWithLibraryBundle:;
- (id)workItemsNeedingProcessingInLibrary:;
- (void)performWorkOnItem:inLibrary:completion:;
- (void).cxx_destruct;
- (BOOL)_hasPendingChatJobsInLibrary:;
- (BOOL)_hasPendingJobsBasedOnLastSyncDate:;
- (void)workerDidFinishWithDatabaseContext:;
- (id)photoLibraryWithDatabaseContext:;
- (BOOL)_shouldContinueProcessingWithError:;
- (void)executeQueryForSyncManager:type:startDate:endDate:batchHandler:completionHandler:;
+ (BOOL)supportsWellKnownPhotoLibraryIdentifier:;
@end
