@interface LotteryRegularlyConfig : IESLivePBBaseMessage
@property (nonatomic) NSInteger times;
@property (nonatomic) NSInteger interval;
+ (id)descriptor;
@end
