@interface SiriAnalyticsMetastore : NSObject
- (void)bootstrap;
- (id)init;
- (void)dealloc;
- (BOOL)storeSensitiveConditionSpan:for:bootSessionUUID:;
- (void).cxx_destruct;
- (id)sensitiveConditionsWithBootSessionUUIDs:;
- (BOOL)endLastSpanWithClockIdentifier:conditionType:endedOn:;
- (void)prune;
@end
