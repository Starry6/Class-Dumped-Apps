@interface HTSLiveGeneralCarnivalMessage_SpecialDanmakuPlay : IESLivePBBaseMessage
@property (nonatomic) q playType;
@property (nonatomic) HTSLiveGeneralCarnivalMessage_SpecialDanmakuPlay_EcomRedPacket ecomRedPacket;
@property (nonatomic) BOOL hasEcomRedPacket;
+ (id)descriptor;
@end
