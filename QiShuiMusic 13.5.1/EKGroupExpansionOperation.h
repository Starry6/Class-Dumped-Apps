@interface EKGroupExpansionOperation : NSOperation
- (void)_finishWithError:;
- (void)start;
- (BOOL)isConcurrent;
- (BOOL)isExecuting;
- (BOOL)isFinished;
- (void)main;
- (void).cxx_destruct;
- (void)_processResults:;
- (id)_processResults:class:;
- (id)initWithSource:group:completionBlock:;
@end
