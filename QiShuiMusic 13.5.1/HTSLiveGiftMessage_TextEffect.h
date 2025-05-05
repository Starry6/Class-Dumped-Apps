@interface HTSLiveGiftMessage_TextEffect : IESLivePBBaseMessage
@property (nonatomic) HTSLiveGiftMessage_TextEffect_Detail portrait;
@property (nonatomic) BOOL hasPortrait;
@property (nonatomic) HTSLiveGiftMessage_TextEffect_Detail landscape;
@property (nonatomic) BOOL hasLandscape;
+ (id)descriptor;
@end
