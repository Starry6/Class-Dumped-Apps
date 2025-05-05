@interface AVCRTCPPacket : NSObject
@property (nonatomic) C packetType;
@property (nonatomic) I SSRC;
- (id)description;
- (unsigned char)packetType;
- (void)setPacketType:;
- (unsigned int)SSRC;
- (id)initWithRTCPPacket:;
- (void)setSSRC:;
+ (id)newPacketWithRTCPPacket:;
@end
