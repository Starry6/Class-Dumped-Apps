@interface BattleLynxData : IESLivePBBaseMessage
@property (nonatomic) BattleConfigSetting battleConfigSetting;
@property (nonatomic) BOOL hasBattleConfigSetting;
@property (nonatomic) BattleSkinConfig skinConfig;
@property (nonatomic) BOOL hasSkinConfig;
@property (nonatomic) BreakthroughInfo breakthroughInfo;
@property (nonatomic) BOOL hasBreakthroughInfo;
@property (nonatomic) BattleTitleConfig titleConfig;
@property (nonatomic) BOOL hasTitleConfig;
@property (nonatomic) BattleTitleConfig punishConfig;
@property (nonatomic) BOOL hasPunishConfig;
@property (nonatomic) BattleEffectInfo battleEffectInfo;
@property (nonatomic) BOOL hasBattleEffectInfo;
@property (nonatomic) GPBInt64ObjectDictionary auxiliaryInfo;
@property (nonatomic) Q auxiliaryInfo_Count;
@property (nonatomic) SurvivalConfig survivalConfig;
@property (nonatomic) BOOL hasSurvivalConfig;
@property (nonatomic) SurvivalInfo survivalInfo;
@property (nonatomic) BOOL hasSurvivalInfo;
+ (id)descriptor;
@end
