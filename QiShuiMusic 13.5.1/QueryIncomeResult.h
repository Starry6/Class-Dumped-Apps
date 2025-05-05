@interface QueryIncomeResult : IESLivePBBaseMessage
@property (nonatomic) QueryIncomeResult_QueryIncomeBalance data_p;
@property (nonatomic) BOOL hasData_p;
@property (nonatomic) QueryIncomeResult_QueryIncomeResultExtra extra;
@property (nonatomic) BOOL hasExtra;
+ (id)descriptor;
@end
