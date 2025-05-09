@interface BattleArimesRanklistResult_ResponseData : IESLivePBBaseMessage
@property (nonatomic) NSMutableArray usersArray;
@property (nonatomic) Q usersArray_Count;
@property (nonatomic) BattleArimesRanklistResult_TipBar tipBar;
@property (nonatomic) BOOL hasTipBar;
@property (nonatomic) TeamTask teamTask;
@property (nonatomic) BOOL hasTeamTask;
@property (nonatomic) NSInteger teamTaskSelfStatus;
@property (nonatomic) BattleContributorsRankListV2 rankListV2;
@property (nonatomic) BOOL hasRankListV2;
@property (nonatomic) BattleRankUser selfRankInfo;
@property (nonatomic) BOOL hasSelfRankInfo;
@property (nonatomic) NSString mvpUid;
@property (nonatomic) q contributerTotalUv;
@property (nonatomic) NSString anchorRelativeScore;
@property (nonatomic) q anchorRank;
@property (nonatomic) NSString des;
@property (nonatomic) NSString desSub;
@property (nonatomic) BattleSelfSettingRate selfData;
@property (nonatomic) BOOL hasSelfData;
@property (nonatomic) BattleArimesRanklistResult_BattleDetail battleDetail;
@property (nonatomic) BOOL hasBattleDetail;
@property (nonatomic) NSString pkValueUnitType;
@property (nonatomic) NSString pkValueDes;
@property (nonatomic) BOOL battleDetailSwitch;
@property (nonatomic) BattleArimesRanklistResult_UserInfo operationUserInfo;
@property (nonatomic) BOOL hasOperationUserInfo;
@property (nonatomic) NSString totalUvText;
@property (nonatomic) BattleArimesRanklistResult_PromptInfo promptInfo;
@property (nonatomic) BOOL hasPromptInfo;
+ (id)descriptor;
@end
