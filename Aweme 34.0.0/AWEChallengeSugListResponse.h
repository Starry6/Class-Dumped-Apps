@interface AWEChallengeSugListResponse : AWEBaseApiModel
@property (nonatomic) NSArray challengSugList;
@property (nonatomic) AWERecommendWordQueryRecordModel wordsQueryRecord;
- (id)wordsQueryRecord;
- (void)setWordsQueryRecord:;
- (id)challengSugList;
- (void)setChallengSugList:;
- (void).cxx_destruct;
+ (id)wordsQueryRecordJSONTransformer;
+ (id)challengSugListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
