@interface BattleAutoMatchResult : IESLivePBBaseMessage
@property (nonatomic) BattleAutoMatchResult_ResponseData data_p;
@property (nonatomic) BOOL hasData_p;
@property (nonatomic) BattleAutoMatchResult_Extra extra;
@property (nonatomic) BOOL hasExtra;
+ (id)descriptor;
@end
