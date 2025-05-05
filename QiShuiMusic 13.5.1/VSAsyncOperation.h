@interface VSAsyncOperation : NSOperation
- (void)executionDidBegin;
- (void)cancel;
- (void)start;
- (BOOL)isExecuting;
- (BOOL)isAsynchronous;
- (BOOL)isFinished;
- (void)finishExecutionIfPossible;
@end
