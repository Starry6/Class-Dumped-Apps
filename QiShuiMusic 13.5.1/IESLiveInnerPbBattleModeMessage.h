@interface IESLiveInnerPbBattleModeMessage : GPBMessage
@property (nonatomic) IESLiveInnerPbCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) q mode;
@property (nonatomic) IESLiveInnerPbBattleModeMessage_StealTowerData stealTowerData;
@property (nonatomic) BOOL hasStealTowerData;
@property (nonatomic) q now;
+ (id)descriptor;
@end
