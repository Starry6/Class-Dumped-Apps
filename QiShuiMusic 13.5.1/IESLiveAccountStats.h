@interface IESLiveAccountStats : IESLivePBBaseMessage
@property (nonatomic) q videosCount;
@property (nonatomic) BOOL videosCountEnable;
@property (nonatomic) q totalIncome;
@property (nonatomic) q totalConsumeToTarget;
+ (id)descriptor;
@end
