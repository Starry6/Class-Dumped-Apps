@interface BattleStarActivityRankList : IESLivePBBaseMessage
@property (nonatomic) NSInteger tab;
@property (nonatomic) q rank;
@property (nonatomic) q score;
@property (nonatomic) q rewardLimit;
@property (nonatomic) q showLimit;
@property (nonatomic) q deltaScore;
+ (id)descriptor;
@end
