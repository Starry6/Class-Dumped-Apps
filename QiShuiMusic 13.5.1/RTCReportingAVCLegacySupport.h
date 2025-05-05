@interface RTCReportingAVCLegacySupport : NSObject
@property (nonatomic) @ awdAdaptor;
- (id)init;
- (void)dealloc;
- (void)invokeAWDAdaptorForPayload:category:type:;
- (void)sendPowerLogEventForClient:serviceName:payload:category:type:eventNumber:;
- (id)awdAdaptor;
@end
