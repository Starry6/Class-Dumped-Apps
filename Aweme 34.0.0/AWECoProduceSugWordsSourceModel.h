@interface AWECoProduceSugWordsSourceModel : AWEBaseApiModel
@property (nonatomic) NSArray wordsArray;
@property (nonatomic) NSString queryID;
- (id)wordsArray;
- (void)setWordsArray:;
- (void)setQueryID:;
- (id)queryID;
- (void).cxx_destruct;
+ (id)wordsArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
