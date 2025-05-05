@interface IESLiveContributor : IESLivePBBaseMessage
@property (nonatomic) HTSLiveImage ranking;
@property (nonatomic) BOOL hasRanking;
@property (nonatomic) q contributionCount;
@property (nonatomic) q index;
+ (id)descriptor;
@end
