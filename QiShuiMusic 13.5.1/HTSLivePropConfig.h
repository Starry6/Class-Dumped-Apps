@interface HTSLivePropConfig : IESLivePBBaseMessage
@property (nonatomic) GPBInt64ObjectDictionary playValueIcon;
@property (nonatomic) Q playValueIcon_Count;
@property (nonatomic) HTSLiveImage linkmicEffect;
@property (nonatomic) BOOL hasLinkmicEffect;
@property (nonatomic) NSString beautyEffectId;
@property (nonatomic) HTSLiveImage staticLinkmicImg;
@property (nonatomic) BOOL hasStaticLinkmicImg;
+ (id)descriptor;
@end
