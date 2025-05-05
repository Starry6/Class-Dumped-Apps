@interface QueryIncomeResult_CoinRebateStruct : IESLivePBBaseMessage
@property (nonatomic) q rebateLimit;
@property (nonatomic) q giftAmount;
@property (nonatomic) q leftAmount;
+ (id)descriptor;
@end
