@interface HTSLiveBattleMode : IESLivePBBaseMessage
@property (nonatomic) NSInteger mode;
@property (nonatomic) HTSLiveBattleMode_StealTowerData stealTowerData;
@property (nonatomic) BOOL hasStealTowerData;
+ (id)descriptor;
@end
