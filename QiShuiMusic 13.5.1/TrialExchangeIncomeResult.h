@interface TrialExchangeIncomeResult : IESLivePBBaseMessage
@property (nonatomic) TrialExchangeIncomeResult_ResultData data_p;
@property (nonatomic) BOOL hasData_p;
+ (id)descriptor;
@end
