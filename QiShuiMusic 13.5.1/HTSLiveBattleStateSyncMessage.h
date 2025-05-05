@interface HTSLiveBattleStateSyncMessage : IESLivePBBaseMessage
@property (nonatomic) HTSLiveCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) HTSLiveBattleSettings battleSettings;
@property (nonatomic) BOOL hasBattleSettings;
@property (nonatomic) SurvivalInfo survivalInfo;
@property (nonatomic) BOOL hasSurvivalInfo;
+ (id)descriptor;
@end
