@interface BattleStarActivityMeta : IESLivePBBaseMessage
@property (nonatomic) q startTime;
@property (nonatomic) q endTime;
@property (nonatomic) q showEndTime;
@property (nonatomic) q nowTime;
+ (id)descriptor;
@end
