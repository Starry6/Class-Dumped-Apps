@interface PLSyndicationResourcePrefetchManager : NSObject
@property (nonatomic) <PLSyndicationResourcePrefetchManagerDelegate> delegate;
- (id)highPriorityResourcesForPrefetchWithManagedObjectContext:;
- (void)prefetchResourceWithObjectIDs:completion:;
- (id)lowPriorityResourcesForPrefetchWithManagedObjectContext:;
- (void)_prepareResourceForPrefetch:;
- (id)delegate;
- (id)_fetchDownloadThrottlingDateAndClearIfNeededWithManagedObjectContext:;
- (void).cxx_destruct;
- (void)_handleDownloadFinishedWithSuccess:error:resource:downloadThrottlingDate:networkAccessAllowed:managedObjectContext:;
- (id)initWithDelegate:;
- (void)prefetchResourceWithObjectID:completion:;
- (id)_resourcesForPrefetchWithManagedObjectContext:predicate:;
@end
