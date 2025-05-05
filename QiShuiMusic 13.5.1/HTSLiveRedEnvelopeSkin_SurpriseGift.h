@interface HTSLiveRedEnvelopeSkin_SurpriseGift : IESLivePBBaseMessage
@property (nonatomic) NSString title;
@property (nonatomic) NSString subtitle;
@property (nonatomic) HTSLiveImage effect;
@property (nonatomic) BOOL hasEffect;
@property (nonatomic) HTSLiveImage fortuneLabel;
@property (nonatomic) BOOL hasFortuneLabel;
@property (nonatomic) HTSLiveImage exclusiveGiftIcon;
@property (nonatomic) BOOL hasExclusiveGiftIcon;
+ (id)descriptor;
@end
