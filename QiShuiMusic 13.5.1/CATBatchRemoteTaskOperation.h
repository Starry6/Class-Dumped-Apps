@interface CATBatchRemoteTaskOperation : CATOperation
@property (nonatomic) NSArray remoteTaskOperations;
- (id)init;
- (void)cancel;
- (BOOL)isAsynchronous;
- (void)main;
- (void).cxx_destruct;
- (void)cancelSubOperations;
- (void)remoteTaskDidFinish:;
- (id)initWithTaskClient:requests:;
- (id)initWithRemoteTaskOperations:;
- (id)remoteTaskOperations;
@end
