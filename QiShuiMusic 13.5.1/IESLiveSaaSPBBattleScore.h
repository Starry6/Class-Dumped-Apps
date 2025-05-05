@interface IESLiveSaaSPBBattleScore : GPBMessage
@property (nonatomic) NSInteger score;
@property (nonatomic) NSString openId;
@property (nonatomic) NSString unionId;
@property (nonatomic) NSInteger rankBonusScore;
@property (nonatomic) NSInteger weeklyRank;
@property (nonatomic) NSInteger winningStreak;
@property (nonatomic) NSInteger winningStreakBonusScore;
@property (nonatomic) NSInteger battleCountBonusScore;
@property (nonatomic) NSInteger currentBonus;
@property (nonatomic) IESLiveSaaSPBBattleStarActivityGrade grade;
@property (nonatomic) BOOL hasGrade;
@property (nonatomic) BOOL scoreRelative;
@property (nonatomic) NSString scoreRelativeText;
@property (nonatomic) BOOL isLargePkScore;
@property (nonatomic) BOOL roomLikeTrigger;
@property (nonatomic) NSString scoreBlurText;
@property (nonatomic) q battleRank;
@property (nonatomic) BOOL newScoreOpen;
@property (nonatomic) NSString multiPkTeamScoreText;
@property (nonatomic) q multiPkTeamScore;
@property (nonatomic) q multiPkTeamRank;
@property (nonatomic) BOOL isMultiPkRelativeText;
+ (id)descriptor;
@end
