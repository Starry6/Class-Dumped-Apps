@interface BattleStatsResult : IESLivePBBaseMessage
@property (nonatomic) BattleStatsResult_ResponseData data_p;
@property (nonatomic) BOOL hasData_p;
+ (id)descriptor;
@end
