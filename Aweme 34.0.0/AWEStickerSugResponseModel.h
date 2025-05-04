@interface AWEStickerSugResponseModel : AWEBaseApiModel
@property (nonatomic) NSArray sugList;
@property (nonatomic) AWEStickerSugWordQueryRecordModel wordsQueryRecord;
- (id)wordsQueryRecord;
- (void)setWordsQueryRecord:;
- (id)sugList;
- (void)setSugList:;
- (void).cxx_destruct;
+ (id)wordsQueryRecordJSONTransformer;
+ (id)sugListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
