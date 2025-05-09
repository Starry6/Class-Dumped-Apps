@interface VCVideoStreamRateController : NSObject
@property (nonatomic) I minBitrate;
@property (nonatomic) I maxBitrate;
@property (nonatomic) I targetBitrate;
@property (nonatomic) double owrd;
@property (nonatomic) double nowrd;
@property (nonatomic) double nowrdShort;
@property (nonatomic) double nowrdAcc;
- (id)className;
- (void)dealloc;
- (unsigned int)maxBitrate;
- (unsigned int)targetBitrate;
- (void)updateRTPReceiveWithTimestamp:sampleRate:time:;
- (double)owrd;
- (double)nowrd;
- (double)nowrdShort;
- (double)nowrdAcc;
- (void)setRateControlInterval:;
- (void)updateVideoStall:withStallDuration:;
- (id)initWithDumpID:;
- (void)setMaxTargetBitrate:minTargetBitrate:;
- (void)doRateControlWithTime:roundTripTime:packetLossRate:operatingBitrate:averageReceivedBitrate:;
- (unsigned short)minTierIndex:;
- (unsigned short)maxTierIndex:;
- (void)setOperatingTierIndexWithBitrate:;
- (void)updateAverageTargetBitrate:interval:;
- (void)createLogDumpFile:;
- (void)releaseLogDumpFile;
- (unsigned int)minBitrate;
@end
