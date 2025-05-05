@interface BattleRivalSortInfo : IESLivePBBaseMessage
@property (nonatomic) q battleNumInSevenDays;
@property (nonatomic) q userCount;
+ (id)descriptor;
@end
