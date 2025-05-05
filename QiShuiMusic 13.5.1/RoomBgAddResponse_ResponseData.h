@interface RoomBgAddResponse_ResponseData : IESLivePBBaseMessage
@property (nonatomic) HTSLiveAudioBGData bg;
@property (nonatomic) BOOL hasBg;
+ (id)descriptor;
@end
