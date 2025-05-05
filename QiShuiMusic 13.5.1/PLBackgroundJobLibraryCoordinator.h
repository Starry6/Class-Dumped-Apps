@interface PLBackgroundJobLibraryCoordinator : NSObject
@property (nonatomic) <PLBackgroundJobLibraryCoordinatorDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)stopBackgroundJobsOnAllBundles;
- (void)setDelegate:;
- (void)_submitNextQueuedBundle;
- (void)_handleAllBundlesCompleted;
- (void)startBackgroundJobsOnBundles:withCriteria:;
- (void)workerCoordinatorDidFinishAllSubmittedJobsOnBundle:;
- (id)delegate;
- (void).cxx_destruct;
- (void)_handleBundleComplete:;
- (id)initWithWorkerCoordinator:;
- (id)pendingJobsOnBundles:;
- (id)initWithStatusCenter:;
- (id)initWithWorkerCoordinator:statusCenter:;
- (BOOL)shouldDeferActivity;
@end
