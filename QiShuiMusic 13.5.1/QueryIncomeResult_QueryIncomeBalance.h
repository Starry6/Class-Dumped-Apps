@interface QueryIncomeResult_QueryIncomeBalance : IESLivePBBaseMessage
@property (nonatomic) q cashBalance;
@property (nonatomic) q maxCash;
@property (nonatomic) NSString customIncomeExchangeURL;
@property (nonatomic) QueryIncomeResult_CoinRebateStruct rebateData;
@property (nonatomic) BOOL hasRebateData;
@property (nonatomic) q goldBalance;
@property (nonatomic) q maxGoldCount;
+ (id)descriptor;
@end
