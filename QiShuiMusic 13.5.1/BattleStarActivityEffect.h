@interface BattleStarActivityEffect : IESLivePBBaseMessage
@property (nonatomic) NSInteger effectType;
@property (nonatomic) q starRewardCount;
@property (nonatomic) q targetBattleScore;
@property (nonatomic) NSMutableArray upgradeRewardIconArray;
@property (nonatomic) Q upgradeRewardIconArray_Count;
@property (nonatomic) q effectTime;
@property (nonatomic) q effectDuration;
+ (id)descriptor;
@end
