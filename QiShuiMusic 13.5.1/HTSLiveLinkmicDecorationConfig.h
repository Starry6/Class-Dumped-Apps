@interface HTSLiveLinkmicDecorationConfig : IESLivePBBaseMessage
@property (nonatomic) NSString name;
@property (nonatomic) NSString playValueIcon;
@property (nonatomic) NSString linkmicDynamicEffect;
@property (nonatomic) NSString beautyEffectId;
@property (nonatomic) NSString linkmicStaticEffect;
@property (nonatomic) BOOL showFlyMicEffect;
@property (nonatomic) NSString valueBgColor;
@property (nonatomic) NSString valueNumberColor;
@property (nonatomic) NSString sponsorBgColor;
@property (nonatomic) HTSLiveImage honorIcon;
@property (nonatomic) BOOL hasHonorIcon;
+ (id)descriptor;
@end
