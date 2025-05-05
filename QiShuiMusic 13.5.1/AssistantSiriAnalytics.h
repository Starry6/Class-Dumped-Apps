@interface AssistantSiriAnalytics : SiriAnalyticsClient
- (id)init;
- (BOOL)clientMessageStream:shouldEmitMessage:timestamp:isolatedStreamUUID:;
- (void)sensitiveCondition:endedAt:completion:;
- (void).cxx_destruct;
- (void)sensitiveCondition:startedAt:completion:;
+ (id)sharedStream;
+ (id)derivedIdentifierForComponent:fromSourceIdentifier:;
+ (id)derivedIdentifierForComponentName:fromSourceIdentifier:;
+ (id)sharedAnalytics;
+ (void)derivedIdentifierForComponent:fromSourceIdentifier:completion:;
@end
