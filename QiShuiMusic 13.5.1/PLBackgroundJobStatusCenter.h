@interface PLBackgroundJobStatusCenter : NSObject
@property (nonatomic) NSDictionary statusDumpDictionary;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)_addRegistrationEventToQueue:;
- (void)recordStoppingWorker:withRemainingJobCount:;
- (id)statusDumpDictionary;
- (void)_recordRegistrationEventToState:;
- (void).cxx_destruct;
- (void)recordWorkerHasPendingJobs:;
- (void)_addRunningEventToQueue:;
- (void)recordActivityRegisteredWithCriteria:;
- (void)recordStartingWorker:withJobCount:;
- (void)backgroundJobServiceDidChangeStateFrom:to:;
- (void)recordFinishingWorker:;
- (void)_recordNonRegistrationEvent;
@end
