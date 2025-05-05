@interface GetLotteryInfoResult_Data : IESLivePBBaseMessage
@property (nonatomic) LotteryInfo lotteryInfo;
@property (nonatomic) BOOL hasLotteryInfo;
+ (id)descriptor;
@end
