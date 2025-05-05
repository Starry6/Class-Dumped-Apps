@interface SiriAnalyticsRootClock : SiriAnalyticsLogicalClock
@property (nonatomic) SiriAnalyticsSensitiveConditionsLedger sensitiveConditionsLedger;
@property (nonatomic) BOOL wasRedactionApplied;
- (void).cxx_destruct;
- (void)sensitiveCondition:startedAt:;
- (void)sensitiveCondition:endedAt:;
- (id)initWithClockIdentifier:timestampOffset:startedOn:metastore:;
- (BOOL)isTrackingDerivativeClockByStreamUUID:;
- (id)derivativeClockForStreamUUID:;
- (id)derivativeClocks;
- (id)sensitiveConditionsLedger;
- (BOOL)wasRedactionApplied;
- (void)setWasRedactionApplied:;
@end
