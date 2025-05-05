@interface IncomeExchangeResult_IncomeExchangeData : IESLivePBBaseMessage
@property (nonatomic) NSString orderId;
@property (nonatomic) q rebateAmount;
+ (id)descriptor;
@end
