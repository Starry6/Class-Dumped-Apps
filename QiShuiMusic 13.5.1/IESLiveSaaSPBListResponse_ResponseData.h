@interface IESLiveSaaSPBListResponse_ResponseData : GPBMessage
@property (nonatomic) NSMutableArray userArray;
@property (nonatomic) Q userArray_Count;
@property (nonatomic) IESLiveSaaSPBBattleStatsMeta battleStats;
@property (nonatomic) BOOL hasBattleStats;
@property (nonatomic) IESLiveSaaSPBLinkerStats linkerStats;
@property (nonatomic) BOOL hasLinkerStats;
@property (nonatomic) GPBInt64ObjectDictionary linkerContentMap;
@property (nonatomic) Q linkerContentMap_Count;
+ (id)descriptor;
@end
