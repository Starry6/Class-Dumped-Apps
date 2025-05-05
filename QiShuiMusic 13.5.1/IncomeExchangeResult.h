@interface IncomeExchangeResult : IESLivePBBaseMessage
@property (nonatomic) IncomeExchangeResult_IncomeExchangeData data_p;
@property (nonatomic) BOOL hasData_p;
@property (nonatomic) IncomeExchangeResult_ResponseExtra extra;
@property (nonatomic) BOOL hasExtra;
+ (id)descriptor;
@end
