@interface LynxAsyncServiceOperation : NSOperation
@property (nonatomic) @? operationBlock;
@property (nonatomic) BOOL executing;
@property (nonatomic) BOOL finished;
- (void)operationFinish;
- (void)setFinished:;
- (void)cancel;
- (BOOL)executing;
- (BOOL)finished;
- (void)start;
- (BOOL)isExecuting;
- (BOOL)isAsynchronous;
- (BOOL)isFinished;
- (void).cxx_destruct;
- (void)setExecuting:;
- (void)done;
- (id)operationBlock;
- (void)setOperationBlock:;
- (id)initWithOperationBlock:;
@end
