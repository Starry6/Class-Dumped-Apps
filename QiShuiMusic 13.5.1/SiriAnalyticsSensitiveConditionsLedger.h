@interface SiriAnalyticsSensitiveConditionsLedger : NSObject
- (id)init;
- (void).cxx_destruct;
- (id)initWithClockIdentifier:metastore:;
- (void)startWithSensitiveCondition:at:;
- (void)endWithSensitiveCondition:at:;
- (id)processWithNanosecondsSinceBoot:tlut:;
- (id)allSpans;
@end
