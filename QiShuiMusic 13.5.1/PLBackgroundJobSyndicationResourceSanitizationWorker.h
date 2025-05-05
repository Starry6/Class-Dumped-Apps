@interface PLBackgroundJobSyndicationResourceSanitizationWorker : PLBackgroundJobWorker
@property (nonatomic) NSString name;
@property (nonatomic) BOOL isNetworkAccessAllowed;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)performTransactionForPrefetchManager:synchronous:block:;
- (unsigned long long)batchSize;
- (id)resourceIDsForPrefetchWithLibrary:;
- (id)requestLocalAvailabilityChangeForPrefetchManager:resource:options:completion:;
- (id)initWithLibraryBundle:;
- (BOOL)isNetworkAccessAllowed;
- (void)batchRequestResourcesForPrefetchManager:itemIdentifiersWithBundleIDs:destURLs:options:resultHandler:completionHandler:;
- (id)workItemsNeedingProcessingInLibrary:;
- (void)performWorkOnItem:inLibrary:completion:;
- (void).cxx_destruct;
- (void)prefetchManager:receivedNewDownloadThrottlingDate:managedObjectContext:;
- (id)name;
- (id)downloadThrottlingDateForPrefetchManager:;
+ (BOOL)supportsWellKnownPhotoLibraryIdentifier:;
+ (id)syndicationWorkerCriteria;
@end
