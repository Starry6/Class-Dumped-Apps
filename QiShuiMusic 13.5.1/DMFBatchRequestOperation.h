@interface DMFBatchRequestOperation : CATOperation
@property (nonatomic) CATOperationQueue queue;
@property (nonatomic) CATRemoteTaskOperation activityTransactionOperation;
@property (nonatomic) NSArray subOperations;
- (void)setName:;
- (BOOL)isAsynchronous;
- (void)main;
- (void).cxx_destruct;
- (void)setQueue:;
- (id)queue;
- (void)activityTransactionOperationDidStart:;
- (void)activityTransactionOperationDidFinish:;
- (id)initWithActivityTransactionOperation:subOperations:;
- (id)activityTransactionOperation;
- (void)setActivityTransactionOperation:;
- (id)subOperations;
- (void)setSubOperations:;
@end
