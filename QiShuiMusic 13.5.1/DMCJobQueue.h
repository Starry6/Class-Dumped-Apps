@interface DMCJobQueue : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> jobQueue;
@property (nonatomic) NSString queueID;
@property (nonatomic) I nextJobSequenceNumber;
@property (nonatomic) @? executionQueueAbortCompletionBlock;
@property (nonatomic) DMCHangDetectionQueue executionQueue;
- (id)init;
- (void)dealloc;
- (id)executionQueue;
- (id)initWithExecutionQueue:;
- (void)setExecutionQueue:;
- (void).cxx_destruct;
- (void)queueBlock:;
- (id)queueID;
- (void)fromFunction:enqueueJob:;
- (void)jobDidFinishFromFunction:jobBlockDescription:;
- (void)waitForEnqueuedJobsToCompleteCompletionBlock:;
- (id)jobQueue;
- (void)setJobQueue:;
- (void)setQueueID:;
- (unsigned int)nextJobSequenceNumber;
- (void)setNextJobSequenceNumber:;
- (id)executionQueueAbortCompletionBlock;
- (void)setExecutionQueueAbortCompletionBlock:;
@end
