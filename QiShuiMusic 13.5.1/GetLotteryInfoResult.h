@interface GetLotteryInfoResult : IESLivePBBaseMessage
@property (nonatomic) GetLotteryInfoResult_Data data_p;
@property (nonatomic) BOOL hasData_p;
+ (id)descriptor;
@end
