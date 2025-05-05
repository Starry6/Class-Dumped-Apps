@interface BattleStarActivityTask : IESLivePBBaseMessage
@property (nonatomic) q level;
@property (nonatomic) BattleStarActivityTask_Progress progress;
@property (nonatomic) BOOL hasProgress;
@property (nonatomic) q rewardStarCount;
+ (id)descriptor;
@end
