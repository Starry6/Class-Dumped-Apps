@interface IESLiveSaaSPBLinkMicBattleFinish : GPBMessage
@property (nonatomic) IESLiveSaaSPBCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) IESLiveSaaSPBBattleSettings battleSettings;
@property (nonatomic) BOOL hasBattleSettings;
@property (nonatomic) NSMutableArray battleArmiesArray;
@property (nonatomic) Q battleArmiesArray_Count;
@property (nonatomic) NSMutableArray battleScoresArray;
@property (nonatomic) Q battleScoresArray_Count;
@property (nonatomic) NSMutableArray anchorsArray;
@property (nonatomic) Q anchorsArray_Count;
@property (nonatomic) NSMutableDictionary gradeChanges;
@property (nonatomic) Q gradeChanges_Count;
@property (nonatomic) IESLiveSaaSPBOperationalPlay operationalPlay;
@property (nonatomic) BOOL hasOperationalPlay;
@property (nonatomic) NSInteger endReason;
@property (nonatomic) NSString cutShortPrompt;
@property (nonatomic) NSString cutShortToast;
@property (nonatomic) BOOL cutShortWin;
@property (nonatomic) NSMutableDictionary userInfos;
@property (nonatomic) Q userInfos_Count;
@property (nonatomic) NSInteger killFinishType;
+ (id)descriptor;
@end
