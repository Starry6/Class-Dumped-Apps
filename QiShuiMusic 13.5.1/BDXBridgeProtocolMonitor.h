@interface BDXBridgeProtocolMonitor : NSObject
@property (nonatomic) HMDTTMonitor hmdMonitor;
- (id)hmdMonitor;
- (void)setHmdMonitor:;
- (void)track:metric:category:extra:;
- (void)trackPerformanceWithCallMessage:callbackMessage:callbackResult:containerType:callbackEncodeDuration:callbackSendTimestamp:;
- (void).cxx_destruct;
- (id)initWithMonitor:;
+ (id)hostAppChannel;
+ (id)hostAppID;
+ (id)sharedInstance;
@end
