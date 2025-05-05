@interface HTSLiveLinkmicTeamfightBonusInfo : IESLivePBBaseMessage
@property (nonatomic) q startTime;
@property (nonatomic) q duration;
@property (nonatomic) double coefficient;
+ (id)descriptor;
@end
