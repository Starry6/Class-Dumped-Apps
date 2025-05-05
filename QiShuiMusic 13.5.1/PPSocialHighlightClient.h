@interface PPSocialHighlightClient : NSObject
- (void)feedbackForHighlight:type:client:variant:completion:;
- (id)init;
- (BOOL)rankedCollaborationsWithLimit:client:variant:error:handleBatch:;
- (BOOL)rankedHighlightsForSyncedItems:client:variant:error:handleBatch:;
- (id)_remoteObjectProxy;
- (void)_unblockPendingQueries;
- (void).cxx_destruct;
- (id)_synchronousRemoteObjectProxyWithErrorHandler:;
- (void)feedbackForAttribution:type:client:variant:completion:;
- (BOOL)rankedHighlightsWithLimit:client:variant:error:handleBatch:;
- (void)rankedHighlightsBatch:isLast:error:queryId:completion:;
- (double)decayInterval;
- (id)attributionForIdentifier:error:;
- (id)_internalRemoteObjectProxy;
+ (id)sharedInstance;
@end
