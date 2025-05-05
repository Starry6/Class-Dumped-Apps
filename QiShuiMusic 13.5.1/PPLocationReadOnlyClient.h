@interface PPLocationReadOnlyClient : NSObject
- (id)init;
- (void)locationBatch:isLast:error:queryId:completion:;
- (BOOL)rankedLocationsWithQuery:error:handleBatch:;
- (void)locationRecordBatch:isLast:error:queryId:completion:;
- (void)registerFeedback:completion:;
- (id)_remoteObjectProxy;
- (void)_unblockPendingQueries;
- (void).cxx_destruct;
- (id)_synchronousRemoteObjectProxyWithErrorHandler:;
- (BOOL)locationRecordsWithQuery:error:handleBatch:;
+ (id)sharedInstance;
@end
