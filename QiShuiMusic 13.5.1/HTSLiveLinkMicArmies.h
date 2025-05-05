@interface HTSLiveLinkMicArmies : IESLivePBBaseMessage
@property (nonatomic) HTSLiveCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) NSMutableDictionary userArmiesMap;
@property (nonatomic) Q userArmiesMap_Count;
@property (nonatomic) NSMutableArray userArmiesListArray;
@property (nonatomic) Q userArmiesListArray_Count;
@property (nonatomic) BattleContributorsRankListV2 rankListV2;
@property (nonatomic) BOOL hasRankListV2;
@property (nonatomic) NSString topShowText;
+ (id)descriptor;
@end
