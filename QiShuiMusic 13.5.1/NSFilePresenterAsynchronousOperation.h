@interface NSFilePresenterAsynchronousOperation : NSOperation
- (void)start;
- (void)finish;
- (BOOL)isExecuting;
- (BOOL)isAsynchronous;
- (BOOL)isFinished;
+ (id)operationWithBlock:;
@end
