@interface HTSLiveGuestBattleGradeConfig : IESLivePBBaseMessage
@property (nonatomic) NSString name;
@property (nonatomic) HTSLiveImage playValueIcon;
@property (nonatomic) BOOL hasPlayValueIcon;
@property (nonatomic) HTSLiveImage linkmicEffect;
@property (nonatomic) BOOL hasLinkmicEffect;
@property (nonatomic) NSString beautyEffectId;
@property (nonatomic) HTSLiveImage resultEffect;
@property (nonatomic) BOOL hasResultEffect;
@property (nonatomic) NSString decorationId;
+ (id)descriptor;
@end
