@interface IESLiveScoreGapChallengeTeamInfo : IESLivePBBaseMessage
@property (nonatomic) NSString teamIdStr;
@property (nonatomic) q score;
@property (nonatomic) q ownerId;
+ (id)descriptor;
@end
