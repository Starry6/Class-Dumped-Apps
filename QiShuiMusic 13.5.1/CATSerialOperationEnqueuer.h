@interface CATSerialOperationEnqueuer : NSObject
- (void)dealloc;
- (void)addOperation:;
- (void)observeValueForKeyPath:ofObject:change:context:;
- (void).cxx_destruct;
- (id)initWithTargetOperationQueue:;
- (void)enqueueNextOperation;
- (void)checkIfOperationIsFinished:;
- (void)performThreadSafeBlock:;
- (void)startObservingOperation:;
- (void)stopObservingOperation:;
@end
