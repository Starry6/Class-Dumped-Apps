@interface IESLiveSaaSPBLinkMicMethod_UserScores : GPBMessage
@property (nonatomic) q score;
@property (nonatomic) NSString openId;
@property (nonatomic) q weeklyRank;
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
@property (nonatomic) NSString curAddScoreText;
@property (nonatomic) q buffScoreRatio;
+ (id)descriptor;
@end
