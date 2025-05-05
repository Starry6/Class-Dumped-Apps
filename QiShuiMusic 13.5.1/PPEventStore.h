@interface PPEventStore : NSObject
@property (nonatomic) NSString clientIdentifier;
- (BOOL)iterEventHighlightsFrom:to:error:block:;
- (BOOL)interactionSummaryMetricsError:block:;
- (id)init;
- (BOOL)iterWeeklyEventHighlightsWithOptions:error:block:;
- (void)_loadEventNameRecordsWithDelegate:;
- (BOOL)sendRTCLogsWithError:;
- (id)_recordGenerator;
- (BOOL)iterWeeklyEventHighlightsError:block:;
- (BOOL)iterDailyEventHighlightsWithOptions:error:block:;
- (void)logEventInteractionForEventWithEventIdentifier:interface:actionType:;
- (BOOL)iterDailyEventHighlightsError:block:;
- (void)registerFeedback:completion:;
- (BOOL)iterEventNameRecordsForClient:error:block:;
- (BOOL)iterScoredEventsWithQuery:error:block:;
- (void).cxx_destruct;
- (void)_sendChangesToDelegates:;
- (id)forwardingTargetForSelector:;
- (BOOL)iterEventHighlightsFrom:to:options:error:block:;
- (BOOL)loadEventNameRecordsAndMonitorChangesWithDelegate:error:;
@end
