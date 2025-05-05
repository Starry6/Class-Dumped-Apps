@interface PPEventClient : NSObject
- (void)eventHighlightsBatch:isLast:error:queryId:completion:;
- (id)init;
- (void)eventNameRecordChangesBatch:isLast:error:queryId:completion:;
- (BOOL)sendRTCLogsWithError:;
- (void)logEventInteractionForEventWithEventIdentifier:interface:actionType:;
- (void)registerFeedback:completion:;
- (BOOL)scoredEventsWithQuery:error:handleBatch:;
- (id)_remoteObjectProxy;
- (void)_unblockPendingQueries;
- (BOOL)eventNameRecordsForClient:error:handleBatch:;
- (void)interactionSummaryMetricsBatch:isLast:error:queryId:completion:;
- (void).cxx_destruct;
- (BOOL)eventHighlightsFrom:to:options:error:handleBatch:;
- (void)scoredEventsBatch:isLast:error:queryId:completion:;
- (BOOL)resolveEventNameRecordChanges:client:error:handleBatch:;
- (void)eventNameRecordBatch:isLast:error:queryId:completion:;
- (BOOL)interactionSummaryMetricsWithError:handleBatch:;
+ (id)sharedInstance;
@end
