@interface ChijiResult : IESLivePBBaseMessage
@property (nonatomic) NSString timeStr;
@property (nonatomic) q winningStreak;
@property (nonatomic) q bonus;
+ (id)descriptor;
@end
