@interface AVCRTCPSenderReport : AVCRTCPPacket
@property (nonatomic) I NTPMostSignificantWord;
@property (nonatomic) I NTPLeastSignificantWord;
@property (nonatomic) I RTPTimestamp;
@property (nonatomic) I packetsSent;
@property (nonatomic) I octetsSent;
@property (nonatomic) AVCRTCPReceiverReport receiverReport;
- (void)dealloc;
- (id)description;
- (unsigned int)packetsSent;
- (void)setPacketsSent:;
- (unsigned int)RTPTimestamp;
- (unsigned int)octetsSent;
- (unsigned int)NTPLeastSignificantWord;
- (unsigned int)NTPMostSignificantWord;
- (id)receiverReport;
- (id)initWithRTCPPacket:;
- (void)setNTPMostSignificantWord:;
- (void)setNTPLeastSignificantWord:;
- (void)setRTPTimestamp:;
- (void)setOctetsSent:;
- (void)setReceiverReport:;
@end
