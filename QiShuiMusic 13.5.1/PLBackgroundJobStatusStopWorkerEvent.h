@interface PLBackgroundJobStatusStopWorkerEvent : PLBackgroundJobStatusEvent
@property (nonatomic) NSString worker;
@property (nonatomic) Q pendingJobsCount;
- (void).cxx_destruct;
- (id)statusDump;
- (id)worker;
- (void)setWorker:;
- (unsigned long long)pendingJobsCount;
- (void)setPendingJobsCount:;
@end
