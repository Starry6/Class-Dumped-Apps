@interface GetLotteryConfigResult : IESLivePBBaseMessage
@property (nonatomic) GetLotteryConfigResult_Data data_p;
@property (nonatomic) BOOL hasData_p;
+ (id)descriptor;
@end
