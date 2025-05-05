@interface ICAsyncOperation : NSOperation
@property (nonatomic) NSError error;
- (void)execute;
- (id)init;
- (void)start;
- (BOOL)isConcurrent;
- (void)finish;
- (BOOL)isExecuting;
- (id)error;
- (BOOL)isAsynchronous;
- (BOOL)isFinished;
- (void).cxx_destruct;
- (void)finishWithError:;
- (void)_execute;
- (void)enqueueChildOperation:;
@end
