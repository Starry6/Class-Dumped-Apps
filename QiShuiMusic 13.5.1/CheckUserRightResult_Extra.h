@interface CheckUserRightResult_Extra : IESLivePBBaseMessage
@property (nonatomic) NSInteger lotteryVcdAuth;
@property (nonatomic) BOOL supportGoldCoin;
@property (nonatomic) NSInteger giftTaskStatus;
@property (nonatomic) q completeNextAwardCoin;
+ (id)descriptor;
@end
