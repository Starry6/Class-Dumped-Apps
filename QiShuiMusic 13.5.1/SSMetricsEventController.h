@interface SSMetricsEventController : SSMetricsController
- (id)_collectUnreportedEventsFromDatabase:since:;
- (id)init;
- (id)unreportedEventsForURL:since:suppressDSID:;
- (int)_maximumUnreportedToSelect;
- (id)unreportedEventsForURL:since:suppressUserInfo:;
- (BOOL)insertEventSummaries:error:;
- (id)unreportedEventsSince:;
- (BOOL)markEventsAsReported:;
- (BOOL)deleteReportedEvents;
- (BOOL)deleteEventsInsertedBefore:;
- (id)unreportedEventURLsSince:;
- (void)flushUnreportedEventsWithCompletionHandler:;
- (void).cxx_destruct;
- (long long)countUnreportedEventsBefore:;
- (id)_collectUnreportedPIDsFromDatabase:matchingReportURLString:since:suppressUserInfo:;
- (void)_serialQueueInsertEvents:withCompletionHandler:;
@end
