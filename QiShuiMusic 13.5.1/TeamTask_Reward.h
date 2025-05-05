@interface TeamTask_Reward : IESLivePBBaseMessage
@property (nonatomic) q beginSecondRelativeBattleFinish;
@property (nonatomic) q endSecondRelativeBattleFinish;
@property (nonatomic) q rewardScore;
@property (nonatomic) q currentRewardBuffMultiple;
+ (id)descriptor;
@end
