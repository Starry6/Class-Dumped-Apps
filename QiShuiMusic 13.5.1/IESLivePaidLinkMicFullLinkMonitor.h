@interface IESLivePaidLinkMicFullLinkMonitor : NSObject
@property (nonatomic) <IESLiveMultiUserScenarioMonitor> fullLinkMonitor;
@property (nonatomic) BOOL isAnchor;
@property (nonatomic) @? extraParamsCallback;
- (id)fullLinkMonitor;
- (id)appendCommonExtra:;
- (id)extraParamsCallback;
- (id)monitorExtraParams;
- (void)monitorIMMessageReceiveWithServiceName:message:description:extra:;
- (void)monitorWithAPIPath:requestTimestamp:error:response:extra:;
- (void)monitorWithEventName:eventType:extra:;
- (id)requiredKeyWithEventType:;
- (id)serviceNameWithEventType:;
- (void)setExtraParamsCallback:;
- (void)setFullLinkMonitor:;
- (void)setIsAnchor:;
- (BOOL)isAnchor;
- (void).cxx_destruct;
@end
