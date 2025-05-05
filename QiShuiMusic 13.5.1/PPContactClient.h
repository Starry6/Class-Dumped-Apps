@interface PPContactClient : NSObject
- (void)contactNameRecordChangesForClient:completion:;
- (id)init;
- (void)contactNameRecordBatch:isLast:error:queryId:completion:;
- (BOOL)upcomingRelevantContactsForQuery:error:handleBatch:;
- (BOOL)rankedContactsWithQuery:error:handleBatch:;
- (void)registerFeedback:completion:;
- (id)_remoteObjectProxy;
- (BOOL)contactHandlesForSource:error:handleBatch:;
- (void)_unblockPendingQueries;
- (BOOL)contactNameRecordChangesForClient:error:handleBatch:;
- (void).cxx_destruct;
- (BOOL)contactHandlesForTopics:error:handleBatch:;
- (void)contactNameRecordChangesBatch:isLast:error:queryId:completion:;
- (BOOL)contactNameRecordsForClient:error:handleBatch:;
- (void)upcomingRelevantContactsBatch:isLast:error:queryId:completion:;
- (void)rankedContactsBatch:isLast:error:queryId:completion:;
- (void)contactHandlesForTopicsBatch:isLast:error:queryId:completion:;
- (void)feedbackDisambiguationResultWithChoicesIdentifiers:chosenContactIdentifier:completion:;
- (void)contactHandlesForSourceBatch:isLast:error:queryId:completion:;
+ (id)sharedInstance;
@end
