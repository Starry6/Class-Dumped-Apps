@interface LotteryFansLevelConfig : IESLivePBBaseMessage
@property (nonatomic) q level;
@property (nonatomic) q dailyLimit;
@property (nonatomic) q dailySendNum;
+ (id)descriptor;
@end
