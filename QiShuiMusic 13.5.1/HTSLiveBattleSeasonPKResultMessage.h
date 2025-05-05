@interface HTSLiveBattleSeasonPKResultMessage : IESLivePBBaseMessage
@property (nonatomic) HTSLiveCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) HTSLiveBattleSeasonPKResultMessage_PKResult pkResult;
@property (nonatomic) BOOL hasPkResult;
@property (nonatomic) HTSLiveBattleSeasonPKResultMessage_UpgradeResult upgradeResult;
@property (nonatomic) BOOL hasUpgradeResult;
@property (nonatomic) HTSLiveBattleSeasonPKResultMessage_GetGradeInfo getGradeInfo;
@property (nonatomic) BOOL hasGetGradeInfo;
+ (id)descriptor;
@end
