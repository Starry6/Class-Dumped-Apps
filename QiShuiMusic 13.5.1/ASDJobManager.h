@interface ASDJobManager : ASDBaseClient
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)dealloc;
- (id)initWithOptions:;
- (void)resumeJobsWithIDs:completionBlock:;
- (void)pauseJobsWithIDs:completionBlock:;
- (void)getJobsUsingBlock:;
- (void)getJobsWithIDs:usingBlock:;
- (void)addJobObserver:;
- (void)cancelJobsWithIDs:completionBlock:;
- (void).cxx_destruct;
- (void)didUpdateStates:;
- (void)didUpdateProgress:;
- (void)didCompleteJobs:finalPhases:;
- (void)removeJobObserver:;
- (void)invalidate;
- (void)finishJobs:;
- (void)didChangeJobs:;
- (void)applicationInstallsDidChange:;
@end
