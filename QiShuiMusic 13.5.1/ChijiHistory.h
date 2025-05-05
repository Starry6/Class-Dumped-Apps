@interface ChijiHistory : IESLivePBBaseMessage
@property (nonatomic) q userId;
@property (nonatomic) BOOL canParticipate;
@property (nonatomic) q originalBonus;
@property (nonatomic) q totalParticipations;
@property (nonatomic) q participationsThisMonth;
@property (nonatomic) q maxWinningStreak;
@property (nonatomic) q maxBattleScore;
@property (nonatomic) q totalBonus;
@property (nonatomic) q bonusThisMonth;
@property (nonatomic) q maxBonus;
@property (nonatomic) NSMutableArray resultListArray;
@property (nonatomic) Q resultListArray_Count;
+ (id)descriptor;
@end
