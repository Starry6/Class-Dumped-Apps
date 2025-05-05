@interface PLBackgroundJobStatusStartWorkerEvent : PLBackgroundJobStatusEvent
@property (nonatomic) NSString worker;
@property (nonatomic) Q jobsCount;
- (void).cxx_destruct;
- (id)statusDump;
- (id)worker;
- (void)setWorker:;
- (unsigned long long)jobsCount;
- (void)setJobsCount:;
@end
