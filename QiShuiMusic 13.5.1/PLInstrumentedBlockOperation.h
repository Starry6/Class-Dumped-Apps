@interface PLInstrumentedBlockOperation : NSBlockOperation
@property (nonatomic) double creationTime;
@property (nonatomic) double executionStartTime;
@property (nonatomic) double executionEndTime;
@property (nonatomic) BOOL postambleAdded;
@property (nonatomic) double timeSpentWaitingInQueue;
@property (nonatomic) double executionTime;
- (id)init;
- (void)setCreationTime:;
- (double)creationTime;
- (void)addExecutionBlock:;
- (double)executionTime;
- (id)description;
- (double)timeSpentWaitingInQueue;
- (double)executionStartTime;
- (void)setExecutionStartTime:;
- (double)executionEndTime;
- (void)setExecutionEndTime:;
- (BOOL)postambleAdded;
- (void)setPostambleAdded:;
+ (id)blockOperationWithBlock:;
@end
