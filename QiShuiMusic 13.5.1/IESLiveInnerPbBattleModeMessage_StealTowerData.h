@interface IESLiveInnerPbBattleModeMessage_StealTowerData : GPBMessage
@property (nonatomic) q startTime;
@property (nonatomic) q finishTime;
@property (nonatomic) q duration;
@property (nonatomic) q targetScore;
@property (nonatomic) q attackerId;
@property (nonatomic) BOOL finish;
@property (nonatomic) q win;
@property (nonatomic) q openScore;
@property (nonatomic) q count;
+ (id)descriptor;
@end
