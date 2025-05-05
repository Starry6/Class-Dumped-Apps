@interface SSVBarrierOperationQueue : NSOperationQueue
- (void)addOperation:;
- (void)addOperationWithBlock:;
- (void)addOperations:waitUntilFinished:;
- (void)addBarrierOperation:;
@end
