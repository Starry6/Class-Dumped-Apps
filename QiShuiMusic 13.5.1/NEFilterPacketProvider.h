@interface NEFilterPacketProvider : NEFilterProvider
@property (nonatomic) @? packetHandler;
- (void).cxx_destruct;
- (id)delayCurrentPacket:;
- (void)allowPacket:;
- (id)packetHandler;
- (void)setPacketHandler:;
@end
