@interface VCNWConnectionCongestionDetector : NSObject
@property (nonatomic) AVCStatisticsCollector statisticsCollector;
@property (nonatomic) I averageThroughputBps;
@property (nonatomic) I averagePacketDelayMs;
@property (nonatomic) I maxAveragePacketDelayMs;
@property (nonatomic) I packetDropCount;
- (void)dealloc;
- (id)statisticsCollector;
- (void)setStatisticsCollector:;
- (BOOL)processNWConnectionNotification:;
- (BOOL)processNWConnectionPacketEvent:eventType:;
- (void)sendCongestionEventWithTimestamp:;
- (void)enableNWLogDump:;
- (unsigned int)averagePacketDelayMs;
- (unsigned int)maxAveragePacketDelayMs;
- (void)setMaxAveragePacketDelayMs:;
- (unsigned int)averageThroughputBps;
- (unsigned int)packetDropCount;
@end
