@interface PLBackgroundJobWorkerCoordinator : NSObject
@property (nonatomic) <PLBackgroundJobWorkerCoordinatorDelegate> delegate;
- (id)initWithWorkerClassesAsStrings:workerMode:statusCenter:;
- (void)setDelegate:;
- (void)_processNextWorkerInLibraryBundle:;
- (id)pendingJobsForBundle:;
- (id)initWithWorkerCoordinatorWorkerMode:statusCenter:;
- (id)_workersForBundle:;
- (void)submitBundleForProcessing:withCriteria:;
- (void)_handleAllWorkersCompleted;
- (id)delegate;
- (void).cxx_destruct;
- (id)initWithWorkerClassesAsStrings:;
- (BOOL)shouldDeferActivity;
- (void)stopAllBackgorundJobs;
@end
