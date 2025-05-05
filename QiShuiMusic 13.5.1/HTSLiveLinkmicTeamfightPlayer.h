@interface HTSLiveLinkmicTeamfightPlayer : IESLivePBBaseMessage
@property (nonatomic) NSString openId;
@property (nonatomic) q score;
@property (nonatomic) NSString scoreStr;
@property (nonatomic) NSString scoreFuzzy;
@property (nonatomic) HTSLiveLinkmicTeamfightContributors contributors;
@property (nonatomic) BOOL hasContributors;
@property (nonatomic) NSInteger role;
+ (id)descriptor;
@end
