@interface IESLiveMessageUplinkResponseModel : NSObject
@property (nonatomic) HTSLiveUplinkPacket reqPacket;
@property (nonatomic) HTSLiveUplinkPacket rspPacket;
- (id)reqPacket;
- (id)rspPacket;
- (void)setReqPacket:;
- (void)setRspPacket:;
- (void).cxx_destruct;
@end
