@interface VCRateControlOWRDEstimator : NSObject
@property (nonatomic) double owrd;
@property (nonatomic) I mode;
- (unsigned int)mode;
- (void)setMode:;
- (double)owrd;
- (double)relativeSendTimeWithTimestamp:timestampRate:;
- (double)relativeReceiveTimeWithTimestamp:timestampRate:;
- (void)calculateOWRDWithSendTime:receiveTime:roundTripTime:;
- (BOOL)detectAbnormalOWRDWithRoundTripTime:;
- (BOOL)detectOutOfOrderAndSpikeWithSendTimestamp:;
- (BOOL)detectOutOfOrderAndSpikeWithReceiveTimestamp:;
- (void)resetOWRDEstimation;
@end
