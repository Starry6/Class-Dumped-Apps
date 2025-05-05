@interface IESIMSearchRelatedVideoModel : IESIMBaseApiModel
@property (nonatomic) NSArray relatedWordList;
@property (nonatomic) IESIMSearchVideoWordsQueryRecordModel wordsQueryRecord;
- (id)relatedWordList;
- (void)setRelatedWordList:;
- (void)setWordsQueryRecord:;
- (id)wordsQueryRecord;
- (void).cxx_destruct;
+ (id)wordsQueryRecordJSONTransformer;
+ (id)relatedWordListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
