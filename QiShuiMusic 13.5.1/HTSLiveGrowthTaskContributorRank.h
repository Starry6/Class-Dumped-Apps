@interface HTSLiveGrowthTaskContributorRank : IESLivePBBaseMessage
@property (nonatomic) HTSLiveUser user;
@property (nonatomic) BOOL hasUser;
@property (nonatomic) q score;
@property (nonatomic) q rank;
+ (id)descriptor;
@end
