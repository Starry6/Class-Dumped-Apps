@interface AVCRTCPReceiverReport : AVCRTCPPacket
@property (nonatomic) I reportedSourceSSRC;
@property (nonatomic) C fractionLost;
@property (nonatomic) I cumulativePacketsLost;
@property (nonatomic) I extendedHighestSequenceNumber;
@property (nonatomic) I interarrivalJitter;
@property (nonatomic) I lastSRTimestamp;
@property (nonatomic) I delaySinceLastSR;
- (id)description;
- (unsigned int)delaySinceLastSR;
- (unsigned int)interarrivalJitter;
- (unsigned int)cumulativePacketsLost;
- (unsigned int)extendedHighestSequenceNumber;
- (unsigned int)reportedSourceSSRC;
- (unsigned int)lastSRTimestamp;
- (unsigned char)fractionLost;
- (id)initWithRTCPPacket:;
- (void)setReportedSourceSSRC:;
- (void)setFractionLost:;
- (void)setCumulativePacketsLost:;
- (void)setExtendedHighestSequenceNumber:;
- (void)setInterarrivalJitter:;
- (void)setLastSRTimestamp:;
- (void)setDelaySinceLastSR:;
@end
