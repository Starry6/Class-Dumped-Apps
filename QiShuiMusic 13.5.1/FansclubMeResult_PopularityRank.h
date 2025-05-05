@interface FansclubMeResult_PopularityRank : IESLivePBBaseMessage
@property (nonatomic) q rank;
@property (nonatomic) q score;
@property (nonatomic) NSString rankDesc;
@property (nonatomic) q lastWeekRank;
@property (nonatomic) HTSLiveImage badge;
@property (nonatomic) BOOL hasBadge;
+ (id)descriptor;
@end
