@interface IncomeExchangeResult_ResponseExtra : IESLivePBBaseMessage
@property (nonatomic) NSString source;
@property (nonatomic) NSString rebateMessage;
@property (nonatomic) IncomeExchangeResult_MarketingData marketingData;
@property (nonatomic) BOOL hasMarketingData;
+ (id)descriptor;
@end
