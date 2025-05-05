@interface IDSTransactionLogBaseTaskHandler : IDSTransactionLogTaskHandler
@property (nonatomic) IDSTransactionLogTask task;
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
- (id)task;
- (void)setTask:;
- (void).cxx_destruct;
- (void)setQueue:;
- (id)queue;
- (void)perform;
- (id)initWithTask:delegate:queue:;
@end
