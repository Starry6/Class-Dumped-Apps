@interface GEOAnalyticsPipelineReportOperation : NSOperation
- (void)start;
- (id)initWithRemoteProxy:runQueue:completionQueue:completionBlock:;
- (BOOL)isExecuting;
- (BOOL)isFinished;
- (void).cxx_destruct;
- (void)_completeOperation;
@end
