@interface BattleMode : IESLivePBBaseMessage
@property (nonatomic) NSInteger mode;
@property (nonatomic) BattleMode_StealTowerData stealTowerData;
@property (nonatomic) BOOL hasStealTowerData;
+ (id)descriptor;
@end
