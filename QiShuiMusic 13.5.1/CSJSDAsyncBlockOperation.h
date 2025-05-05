@interface CSJSDAsyncBlockOperation : NSOperation
@property (nonatomic) @? executionBlock;
- (void)complete;
- (void)setFinished:;
- (void)cancel;
- (void)start;
- (BOOL)isExecuting;
- (id)initWithBlock:;
- (BOOL)isAsynchronous;
- (BOOL)isFinished;
- (void).cxx_destruct;
- (void)setExecuting:;
- (id)executionBlock;
- (void)setExecutionBlock:;
+ (id)blockOperationWithBlock:;
@end
