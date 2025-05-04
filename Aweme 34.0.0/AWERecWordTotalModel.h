@interface AWERecWordTotalModel : AWEBaseApiModel
@property (nonatomic) NSArray wordList;
@property (nonatomic) q cardType;
- (id)wordList;
- (void)setWordList:;
- (void).cxx_destruct;
- (long long)cardType;
- (void)setCardType:;
+ (id)wordListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
