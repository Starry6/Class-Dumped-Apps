@interface IESLiveSaaSPBBattleMode : GPBMessage
@property (nonatomic) NSInteger mode;
@property (nonatomic) IESLiveSaaSPBBattleMode_StealTowerData stealTowerData;
@property (nonatomic) BOOL hasStealTowerData;
+ (id)descriptor;
@end
