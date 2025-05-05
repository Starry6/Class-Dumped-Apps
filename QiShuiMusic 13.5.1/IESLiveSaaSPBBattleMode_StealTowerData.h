@interface IESLiveSaaSPBBattleMode_StealTowerData : GPBMessage
@property (nonatomic) q triggerTime;
@property (nonatomic) q duration;
@property (nonatomic) q targetScore;
@property (nonatomic) q startTime;
@property (nonatomic) q attackerId;
@property (nonatomic) q finishTime;
@property (nonatomic) q win;
@property (nonatomic) q count;
@property (nonatomic) q openScore;
@property (nonatomic) BOOL finish;
+ (id)descriptor;
@end
