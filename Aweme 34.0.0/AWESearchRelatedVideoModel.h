@interface AWESearchRelatedVideoModel : AWEBaseApiModel
@property (nonatomic) NSArray relatedWordList;
@property (nonatomic) AWESearchVideoWordsQueryRecordModel wordsQueryRecord;
- (id)relatedWordList;
- (void)setRelatedWordList:;
- (id)wordsQueryRecord;
- (void)setWordsQueryRecord:;
- (void).cxx_destruct;
+ (id)relatedWordListJSONTransformer;
+ (id)wordsQueryRecordJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
