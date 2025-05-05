@interface IESLiveLinkmicProfitEggTaskInfo : IESLivePBBaseMessage
@property (nonatomic) q targetScore;
@property (nonatomic) q taskDuration;
@property (nonatomic) q taskBeginRelativeBattleEndTime;
@property (nonatomic) q currentScore;
@property (nonatomic) q taskStartTime;
@property (nonatomic) NSInteger taskStatus;
+ (id)descriptor;
@end
