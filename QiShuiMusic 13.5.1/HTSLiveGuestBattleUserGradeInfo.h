@interface HTSLiveGuestBattleUserGradeInfo : IESLivePBBaseMessage
@property (nonatomic) HTSLiveGuestBattleGradeItem curGrade;
@property (nonatomic) BOOL hasCurGrade;
@property (nonatomic) HTSLiveGuestBattleGradeItem nextGrade;
@property (nonatomic) BOOL hasNextGrade;
@property (nonatomic) q upgradeScore;
@property (nonatomic) NSString upgradeScoreStr;
+ (id)descriptor;
@end
