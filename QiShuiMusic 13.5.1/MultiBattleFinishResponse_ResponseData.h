@interface MultiBattleFinishResponse_ResponseData : IESLivePBBaseMessage
@property (nonatomic) BattleStatsMeta battleStats;
@property (nonatomic) BOOL hasBattleStats;
+ (id)descriptor;
@end
