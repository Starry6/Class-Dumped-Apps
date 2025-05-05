@interface IESLiveInteractionBattleFullLinkMonitor : NSObject
@property (nonatomic) <IESLiveMultiUserScenarioMonitor> fullLinkMonitor;
- (id)fullLinkMonitor;
- (id)appendCommonExtra:;
- (void)monitorIMWithName:message:extra:eventModule:;
- (void)monitorWithAPIPath:requestTimestamp:error:response:extra:eventModule:;
- (void)monitorWithName:extra:eventType:eventModule:;
- (void)monitorWithName:extra:eventType:eventModule:metric:;
- (id)requiredKeyWithEventType:;
- (id)serviceNameWithEventType:;
- (void)setFullLinkMonitor:;
- (void).cxx_destruct;
@end
