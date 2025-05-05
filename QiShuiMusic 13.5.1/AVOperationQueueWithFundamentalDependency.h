@interface AVOperationQueueWithFundamentalDependency : NSOperationQueue
- (void)dealloc;
- (void)addOperation:;
- (void)addOperations:waitUntilFinished:;
- (id)initWithFundamentalOperation:;
@end
