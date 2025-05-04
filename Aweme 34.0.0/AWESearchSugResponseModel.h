@interface AWESearchSugResponseModel : AWEBaseApiModel
@property (nonatomic) NSArray sugList;
@property (nonatomic) NSArray virtualSugList;
@property (nonatomic) AWERecommendWordQueryRecordModel wordsQueryRecord;
@property (nonatomic) NSArray wordsLists;
@property (nonatomic) NSDictionary streamTimeCost;
@property (nonatomic) AWESugCacheConfModel sugCacheConf;
- (id)wordsQueryRecord;
- (void)setWordsQueryRecord:;
- (id)streamTimeCost;
- (void)setStreamTimeCost:;
- (id)sugList;
- (void)setSugList:;
- (id)wordsLists;
- (void)setVirtualSugList:;
- (void)setWordsLists:;
- (void)setSugCacheConf:;
- (id)sugCacheConf;
- (id)virtualSugList;
- (void).cxx_destruct;
+ (id)wordsQueryRecordJSONTransformer;
+ (id)sugListJSONTransformer;
+ (id)virtualSugListJSONTransformer;
+ (id)wordsListsJSONTransformer;
+ (id)sugCacheConfJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
