@interface VCAudioStreamTransport : VCMediaStreamTransport
@property (nonatomic) ^v realtimeContext;
- (void)dealloc;
- (int)onStart;
- (id)realtimeContext;
- (void)onStop;
- (void)setPreWarmState:;
- (void)setWRMNotification:;
- (void)setWRMMetricConfig:;
- (void)setWRMCoexMetrics:;
- (void)reportWRMMetrics:;
- (id)initWithHandle:callId:localSSRC:;
- (id)initWithHandle:callId:localSSRC:enableNetworkMonitor:;
- (void)setWRMCallId:;
- (void)startWRM;
- (void)stopWRM;
@end
