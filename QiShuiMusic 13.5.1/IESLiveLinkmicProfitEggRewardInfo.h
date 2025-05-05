@interface IESLiveLinkmicProfitEggRewardInfo : IESLivePBBaseMessage
@property (nonatomic) q rewardBuffMultiple;
@property (nonatomic) q rewardDuration;
@property (nonatomic) q rewardBeginRelativeBattleEndTime;
@property (nonatomic) q rewardStartTime;
@property (nonatomic) q totalRewardScore;
+ (id)descriptor;
@end
