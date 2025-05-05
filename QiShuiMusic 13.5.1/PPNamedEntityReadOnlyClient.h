@interface PPNamedEntityReadOnlyClient : NSObject
- (id)init;
- (BOOL)rankedNamedEntitiesWithQuery:error:handleBatch:;
- (BOOL)namedEntityRecordsWithQuery:error:handleBatch:;
- (void)registerFeedback:completion:;
- (id)_remoteObjectProxy;
- (void)_unblockPendingQueries;
- (void)namedEntityRecordBatch:isLast:error:queryId:completion:;
- (void).cxx_destruct;
- (id)mapItemForPlaceName:error:;
- (id)_synchronousRemoteObjectProxyWithErrorHandler:;
- (void)namedEntityBatch:isLast:error:queryId:completion:;
+ (id)sharedInstance;
@end
