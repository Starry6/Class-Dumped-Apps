@interface HTSLiveGeneralCarnivalMessage_SpecialDanmakuPlay_EcomRedPacket : IESLivePBBaseMessage
@property (nonatomic) HTSLiveGeneralCarnivalMessage_CarnivalEggItem redPacket;
@property (nonatomic) BOOL hasRedPacket;
@property (nonatomic) NSString playContent;
+ (id)descriptor;
@end
