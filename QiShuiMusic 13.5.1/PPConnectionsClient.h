@interface PPConnectionsClient : NSObject
- (id)init;
- (BOOL)recentLocationsForConsumer:criteria:limit:explanationSet:client:error:handleBatch:;
- (void)registerFeedback:completion:;
- (id)_remoteObjectProxy;
- (void)_unblockPendingQueries;
- (void).cxx_destruct;
- (BOOL)recentLocationDonationsSinceDate:client:error:handleBatch:;
- (void)recentLocationsBatch:isLast:error:queryId:completion:;
+ (id)sharedInstance;
@end
