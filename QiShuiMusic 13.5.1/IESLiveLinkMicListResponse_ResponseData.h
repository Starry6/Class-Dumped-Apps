@interface IESLiveLinkMicListResponse_ResponseData : IESLivePBBaseMessage
@property (nonatomic) NSMutableArray userArray;
@property (nonatomic) Q userArray_Count;
@property (nonatomic) BattleStatsMeta battleStats;
@property (nonatomic) BOOL hasBattleStats;
@property (nonatomic) IESLiveLinkerStats linkerStats;
@property (nonatomic) BOOL hasLinkerStats;
@property (nonatomic) GPBInt64ObjectDictionary linkerContentMap;
@property (nonatomic) Q linkerContentMap_Count;
@property (nonatomic) Q version;
@property (nonatomic) IESLiveLinkMicListBizExtra extra;
@property (nonatomic) BOOL hasExtra;
+ (id)descriptor;
@end
