@interface UDPProbeInfo : NSObject
@property (nonatomic) NSString udpProbeHostName;
@property (nonatomic) NSInteger udpProbePort;
@property (nonatomic) NSInteger udpProbePacketNumber;
@property (nonatomic) NSInteger udpRTTThreshold;
@property (nonatomic) NSInteger udpSuccPercentValue;
- (int)udpRTTThreshold;
- (void)setUdpProbeHostName:;
- (void)setUdpProbePacketNumber:;
- (void)setUdpProbePort:;
- (void)setUdpRTTThreshold:;
- (void)setUdpSuccPercentValue:;
- (id)udpProbeHostName;
- (int)udpProbePacketNumber;
- (int)udpProbePort;
- (int)udpSuccPercentValue;
- (id)init;
- (void).cxx_destruct;
@end
