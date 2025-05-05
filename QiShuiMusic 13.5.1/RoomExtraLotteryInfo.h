@interface RoomExtraLotteryInfo : IESLivePBBaseMessage
@property (nonatomic) q lotteryId;
@property (nonatomic) q startAt;
@property (nonatomic) q drawAt;
@property (nonatomic) NSMutableArray conditionArray;
@property (nonatomic) Q conditionArray_Count;
+ (id)descriptor;
@end
