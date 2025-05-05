@interface PLBackgroundJobStatusFinishWorkerEvent : PLBackgroundJobStatusEvent
@property (nonatomic) NSString worker;
- (void).cxx_destruct;
- (id)statusDump;
- (id)worker;
- (void)setWorker:;
@end
