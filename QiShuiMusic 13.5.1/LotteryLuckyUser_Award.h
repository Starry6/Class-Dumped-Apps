@interface LotteryLuckyUser_Award : IESLivePBBaseMessage
@property (nonatomic) NSString summaryDescription;
@property (nonatomic) NSMutableArray prizeDetailsArray;
@property (nonatomic) Q prizeDetailsArray_Count;
+ (id)descriptor;
@end
