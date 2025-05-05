@interface AVCPacketFilterRTP : AVCPacketFilter
@property (nonatomic) C type;
- (unsigned char)type;
- (id)initWithIncomingSSRC:acceptPacketType:;
- (BOOL)isMatchedPacket:size:;
- (BOOL)isRTCPPayload:;
- (BOOL)isPayloadTypeMatched:;
@end
