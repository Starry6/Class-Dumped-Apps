@interface PLSpotlightAsyncOperation : NSOperation
@property (nonatomic) Q operationState;
- (unsigned long long)operationState;
- (void)cancel;
- (void)start;
- (BOOL)isExecuting;
- (BOOL)isAsynchronous;
- (BOOL)isFinished;
- (void)main;
- (void)setOperationState:;
- (id)_keyObserverStringForOperationState:;
@end
