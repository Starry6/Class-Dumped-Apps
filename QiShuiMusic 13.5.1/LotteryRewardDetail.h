@interface LotteryRewardDetail : IESLivePBBaseMessage
@property (nonatomic) q prizeType;
@property (nonatomic) NSString prizeName;
@property (nonatomic) q grantCount;
@property (nonatomic) q expireTime;
+ (id)descriptor;
@end
