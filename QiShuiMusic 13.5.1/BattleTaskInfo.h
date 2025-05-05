@interface BattleTaskInfo : IESLivePBBaseMessage
@property (nonatomic) q taskType;
@property (nonatomic) q startTime;
@property (nonatomic) q duration;
@property (nonatomic) q endTime;
@property (nonatomic) q taskRound;
@property (nonatomic) q collectedCount;
@property (nonatomic) q goalCount;
@property (nonatomic) q finished;
@property (nonatomic) q success;
@property (nonatomic) q bonusRatio;
@property (nonatomic) q hasNextTask;
+ (id)descriptor;
@end
