@interface WBSHistoryConnection : NSObject
- (void)finishClearingHistoryIfNecessaryWithCompletionHandler:;
- (void)ensureConnected:;
- (void)releaseCloudHistory:;
- (void)queryMemoryFootprint:;
- (id)initWithHistoryService:;
- (void)debugGetDatabaseURLWithCompletionHandler:;
- (void)getVisitedLinksWithCompletionHandler:;
- (void)connectWithOptions:delegate:completionHandler:;
- (void)disconnectWithCompletionHandler:;
- (void).cxx_destruct;
- (void)beginHistoryAccessSession:;
- (void)groupVisitsIntoSessionsBetweenStartDate:endDate:completionHandler:;
- (void)initializeCloudHistoryWithConfiguration:completionHandler:;
- (void)getServiceInfo:;
- (void)beginURLCompletionSession:;
@end
