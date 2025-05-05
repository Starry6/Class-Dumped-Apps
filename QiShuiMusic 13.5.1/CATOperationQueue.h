@interface CATOperationQueue : NSOperationQueue
@property (nonatomic) <CATOperationQueueDelegate> delegate;
- (void)setDelegate:;
- (void)addOperation:;
- (void)observeValueForKeyPath:ofObject:change:context:;
- (void)addOperations:waitUntilFinished:;
- (id)delegate;
- (void).cxx_destruct;
- (void)stopObserving:;
- (id)description;
- (void)setUnderlyingQueue:;
- (void)delegateOperationDidFinish:;
- (void)startObserving:;
- (void)delegateWillAddOperation:;
+ (id)mainQueue;
+ (id)currentQueue;
+ (id)backgroundQueue;
@end
