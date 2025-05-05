@interface BattleArimesRanklistResult_BattleDetail : IESLivePBBaseMessage
@property (nonatomic) NSString scoreText;
@property (nonatomic) NSString likeText;
@property (nonatomic) NSString giftText;
@property (nonatomic) NSString giftUvText;
@property (nonatomic) NSString ticketText;
@property (nonatomic) NSString subscribeText;
+ (id)descriptor;
@end
