@interface AVOperation : NSOperation
@property (nonatomic) q status;
@property (nonatomic) NSError error;
- (id)init;
- (void)dealloc;
- (BOOL)isReady;
- (BOOL)isExecuting;
- (id)error;
- (BOOL)isFinished;
- (void)didEnterTerminalState;
- (void)markAsFailedWithError:;
- (void)markAsCompleted;
- (long long)status;
- (BOOL)evaluateDependenciesAndMarkAsExecuting;
- (BOOL)_setStatus:error:resultingStatus:failureReason:;
- (void)markAsCancelled;
+ (long long)statusOfOperations:error:;
@end
