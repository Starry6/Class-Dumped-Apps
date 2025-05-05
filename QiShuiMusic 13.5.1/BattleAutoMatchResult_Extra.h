@interface BattleAutoMatchResult_Extra : IESLivePBBaseMessage
@property (nonatomic) BattleAutoMatchResult_Extra_LogPb logPb;
@property (nonatomic) BOOL hasLogPb;
+ (id)descriptor;
@end
