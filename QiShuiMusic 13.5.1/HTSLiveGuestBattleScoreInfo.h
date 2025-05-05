@interface HTSLiveGuestBattleScoreInfo : IESLivePBBaseMessage
@property (nonatomic) q scoreType;
@property (nonatomic) NSString name;
@property (nonatomic) NSString description_p;
@property (nonatomic) NSString tag;
@property (nonatomic) HTSLiveImage crownGradeRuleImg;
@property (nonatomic) BOOL hasCrownGradeRuleImg;
+ (id)descriptor;
@end
