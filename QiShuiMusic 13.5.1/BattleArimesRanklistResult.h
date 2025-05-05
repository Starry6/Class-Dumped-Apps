@interface BattleArimesRanklistResult : IESLivePBBaseMessage
@property (nonatomic) BattleArimesRanklistResult_ResponseData data_p;
@property (nonatomic) BOOL hasData_p;
+ (id)descriptor;
@end
