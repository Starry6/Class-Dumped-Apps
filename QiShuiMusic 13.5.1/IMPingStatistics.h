@interface IMPingStatistics : NSObject
@property (nonatomic) double medianRoundtripTime;
@property (nonatomic) double minRoundtripTime;
@property (nonatomic) double maxRoundtripTime;
@property (nonatomic) double standardDeviationRoundtripTime;
@property (nonatomic) double averageRoundtripTime;
@property (nonatomic) NSInteger numPingsTransmitted;
@property (nonatomic) NSInteger numPingsReceived;
@property (nonatomic) double packetLossRate;
@property (nonatomic) NSInteger packetsSuccessfullySent;
- (id)description;
- (id)copyWithZone:;
- (id)initWithMaxRTT:medianRTT:avgRTT:minRTT:transmitted:successful:received:;
- (void)_addTransmittedPacket:;
- (void)_addReceivedPacket:;
- (double)packetLossRate;
- (double)medianRoundtripTime;
- (void)_setMedianRoundtripTime:;
- (double)averageRoundtripTime;
- (double)minRoundtripTime;
- (void)_setMinRoundtripTime:;
- (double)maxRoundtripTime;
- (void)_setMaxRoundtripTime:;
- (int)numPingsTransmitted;
- (int)numPingsReceived;
- (int)packetsSuccessfullySent;
- (double)standardDeviationRoundtripTime;
- (void)_setStandardDeviationRoundtripTime:;
@end
