@interface IDSAWDLogging : NSObject
@property (nonatomic) AWDServerConnection AWDServerConnection;
- (id)init;
- (void).cxx_destruct;
- (id)_metricContainerForMetricType:;
- (void)_submitAWDMetric:withContainer:;
- (BOOL)_shouldSubmit;
- (void)submitMetric:withIdentifier:;
- (id)AWDServerConnection;
- (void)IDSQuickRelayEventType:eventSubType:duration:resultCode:providerType:transportType:interfaceType:skeEnabled:isInitiator:protocolVersion:retryCount:serviceName:subServiceName:participantCount:;
- (void)IDSCoreAnalyticsQuickRelayEventType:eventSubType:duration:resultCode:providerType:transportType:interfaceType:skeEnabled:isInitiator:protocolVersion:retryCount:serviceName:subServiceName:participantCount:;
+ (id)sharedInstance;
@end
