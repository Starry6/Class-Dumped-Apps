@interface AWESearchRelatedPOIModel : AWEBaseApiModel
@property (nonatomic) NSString tips;
@property (nonatomic) NSString wordSource;
@property (nonatomic) NSArray wordsList;
- (void)setWordsList:;
- (id)wordsList;
- (id)tips;
- (void).cxx_destruct;
- (void)setTips:;
- (void)setWordSource:;
- (id)wordSource;
+ (id)wordsListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
