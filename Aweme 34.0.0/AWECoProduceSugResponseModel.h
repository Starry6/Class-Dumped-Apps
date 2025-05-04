@interface AWECoProduceSugResponseModel : AWEBaseApiModel
@property (nonatomic) NSArray wordsData;
@property (nonatomic) NSString logID;
- (id)wordsData;
- (void)setWordsData:;
- (void).cxx_destruct;
- (id)logID;
- (void)setLogID:;
+ (id)wordsDataJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
