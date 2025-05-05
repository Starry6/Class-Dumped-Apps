@interface IESLiveSaaSPBLinkMicBattle : GPBMessage
@property (nonatomic) IESLiveSaaSPBCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) IESLiveSaaSPBBattleSettings battleSettings;
@property (nonatomic) BOOL hasBattleSettings;
@property (nonatomic) IESLiveSaaSPBBattleMode battleMode;
@property (nonatomic) BOOL hasBattleMode;
@property (nonatomic) IESLiveSaaSPBBattleTask battleTask;
@property (nonatomic) BOOL hasBattleTask;
@property (nonatomic) NSInteger skinType;
@property (nonatomic) NSMutableDictionary userInfos;
@property (nonatomic) Q userInfos_Count;
@property (nonatomic) IESLiveSaaSPBOperationalPlay operationalPlay;
@property (nonatomic) BOOL hasOperationalPlay;
@property (nonatomic) NSInteger battleType;
@property (nonatomic) BOOL relativeScore;
@property (nonatomic) BOOL normalToMultiple;
+ (id)descriptor;
@end
