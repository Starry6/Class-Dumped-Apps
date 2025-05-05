@interface IESLiveSaaSPBAgainst : GPBMessage
@property (nonatomic) NSString leftName;
@property (nonatomic) IESLiveSaaSPBImage leftLogo;
@property (nonatomic) BOOL hasLeftLogo;
@property (nonatomic) NSString leftGoal;
@property (nonatomic) NSString rightName;
@property (nonatomic) IESLiveSaaSPBImage rightLogo;
@property (nonatomic) BOOL hasRightLogo;
@property (nonatomic) NSString rightGoal;
@property (nonatomic) q timestamp;
@property (nonatomic) q version;
@property (nonatomic) q leftTeamId;
@property (nonatomic) q rightTeamId;
@property (nonatomic) q diffSei2AbsSecond;
@property (nonatomic) NSInteger finalGoalStage;
@property (nonatomic) NSInteger currentGoalStage;
@property (nonatomic) NSInteger leftScoreAddition;
@property (nonatomic) NSInteger rightScoreAddition;
@property (nonatomic) q leftGoalInt;
@property (nonatomic) q rightGoalInt;
@property (nonatomic) IESLiveSaaSPBBasketBallGoalStageDetail leftScoreDetail;
@property (nonatomic) BOOL hasLeftScoreDetail;
@property (nonatomic) IESLiveSaaSPBBasketBallGoalStageDetail rightScoreDetail;
@property (nonatomic) BOOL hasRightScoreDetail;
+ (id)descriptor;
@end
