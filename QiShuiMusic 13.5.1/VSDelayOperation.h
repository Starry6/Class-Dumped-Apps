@interface VSDelayOperation : VSAsyncOperation
@property (nonatomic) double delay;
@property (nonatomic) double tolerance;
@property (nonatomic) NSDate fireDate;
@property (nonatomic) BOOL shouldIgnoreTolerance;
- (double)tolerance;
- (void)_cancelTimer;
- (void)executionDidBegin;
- (id)init;
- (void)cancel;
- (void)dealloc;
- (double)delay;
- (void).cxx_destruct;
- (id)fireDate;
- (id)initWithDelay:tolerance:;
- (id)initWithFireDate:tolerance:;
- (BOOL)shouldIgnoreTolerance;
- (void)setShouldIgnoreTolerance:;
+ (id)delayOperationWithDelay:;
+ (id)delayOperationWithFireDate:;
@end
