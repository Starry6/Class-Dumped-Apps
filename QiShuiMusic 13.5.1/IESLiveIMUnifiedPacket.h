@interface IESLiveIMUnifiedPacket : IESLiveIMTransportPacket
@property (nonatomic) NSArray businessDataArray;
@property (nonatomic) NSArray responsePacketArray;
- (id)businessDataArray;
- (id)responsePacketArray;
- (void)setBusinessDataArray:;
- (void)setResponsePacketArray:;
- (void).cxx_destruct;
@end
