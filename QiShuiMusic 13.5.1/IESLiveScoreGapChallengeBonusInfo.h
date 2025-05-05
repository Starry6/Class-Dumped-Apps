@interface IESLiveScoreGapChallengeBonusInfo : IESLivePBBaseMessage
@property (nonatomic) q bonusDurationSec;
@property (nonatomic) q bonusStartTimeSec;
@property (nonatomic) double bonusCoefficient;
@property (nonatomic) q bonusTeamId;
+ (id)descriptor;
@end
