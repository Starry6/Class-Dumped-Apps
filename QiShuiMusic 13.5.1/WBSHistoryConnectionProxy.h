@interface WBSHistoryConnectionProxy : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> connectionProxyQueue;
@property (nonatomic) <WBSHistoryConnectionProxyDelegate> delegate;
- (void)finishClearingHistoryIfNecessaryWithCompletionHandler:;
- (void)ensureConnected:;
- (id)init;
- (void)dealloc;
- (id)_defaultProxyErrorHandlerWithSimpleReplyHandler:;
- (void)releaseCloudHistory:;
- (void)queryMemoryFootprint:;
- (void)setDelegate:;
- (void)debugGetDatabaseURLWithCompletionHandler:;
- (void)getVisitedLinksWithCompletionHandler:;
- (void)connectWithOptions:delegate:completionHandler:;
- (id)delegate;
- (void)disconnectWithCompletionHandler:;
- (id)_createConnection;
- (void).cxx_destruct;
- (void)beginHistoryAccessSession:;
- (id)queryMemoryFootprintWithError:;
- (void)groupVisitsIntoSessionsBetweenStartDate:endDate:completionHandler:;
- (void)initializeCloudHistoryWithConfiguration:completionHandler:;
- (void)getServiceInfo:;
- (void)beginURLCompletionSession:;
- (void)killService;
- (void)_setupConnectionWithInProcessFallback:;
- (id)connectionProxyQueue;
@end
