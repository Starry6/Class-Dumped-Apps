@interface SiriAnalyticsPreprocessor : NSObject
- (id)init;
- (void).cxx_destruct;
- (id)initWithMetastore:prefs:messageStore:fbf:telemetry:;
- (void)processWithReason:;
- (void)processWithReason:completion:;
@end
