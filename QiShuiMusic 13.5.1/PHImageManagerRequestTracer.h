@interface PHImageManagerRequestTracer : NSObject
+ (id)_currentTimestampString;
+ (void)_inq_recordRequestID:;
+ (void)_inq_trimToMostRecentImageManagerMessages;
+ (int)requestIDFromTaskIdentifier:;
+ (void)registerRequestID:withAssetUUID:;
+ (void)traceMessageForRequestID:message:;
+ (id)recentMessagesSummaryForAssetUUID:;
+ (void)setTracingDisabled:;
@end
