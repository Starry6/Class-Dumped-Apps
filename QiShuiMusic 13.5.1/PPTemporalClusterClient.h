@interface PPTemporalClusterClient : NSObject
- (id)init;
- (id)_remoteObjectProxy;
- (void)_unblockPendingQueries;
- (void).cxx_destruct;
- (void)rankedTemporalClusterBatch:isLast:error:queryId:completion:;
- (BOOL)rankedTemporalClustersForStartDate:endDate:error:handleBatch:;
+ (id)sharedInstance;
@end
