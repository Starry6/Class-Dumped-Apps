@interface AssistantSiriAnalyticsService : NSObject
@property (nonatomic) <SiriAnalyticsObservableMessages> postTransformationStream;
- (id)_applyTransformationsToMessages:;
- (void)handler:largeMessageReceivedWithPath:messageWrapper:completion:;
- (BOOL)_analyticsEnabled;
- (void)handler:vendSandboxExtensionWithResource:readonly:completion:;
- (void)handler:messagesReceived:;
- (void)registerMessageResolver:;
- (void)registerSensitiveConditionsObserver:;
- (void)sensitiveConditionRangesForBootSessionUUIDs:completion:;
- (id)initWithQueue:prefs:localStorageProvider:largeMessageStorage:messageStore:delegate:;
- (id)_applyTransformationsToMessage:;
- (void)handler:resetLogicalClockWithCompletion:;
- (void)handler:unresolvedMessagesReceived:;
- (void)handler:sensitiveCondition:startedAt:completion:;
- (void).cxx_destruct;
- (id)initWithQueue:delegate:;
- (void)sensitiveCondition:startedAt:;
- (id)initWithQueue:;
- (void)sensitiveCondition:endedAt:;
- (id)postTransformationStream;
- (void)handler:sensitiveCondition:endedAt:completion:;
@end
