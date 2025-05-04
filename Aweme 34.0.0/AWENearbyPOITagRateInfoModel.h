@interface AWENearbyPOITagRateInfoModel : AWEBaseApiModel
@property (nonatomic) NSArray impressions;
@property (nonatomic) NSString recommendTag;
@property (nonatomic) NSArray tagRateList;
@property (nonatomic) q tagRatesCount;
- (id)recommendTag;
- (void)setRecommendTag:;
- (id)tagRateList;
- (void)setTagRateList:;
- (long long)tagRatesCount;
- (void)setTagRatesCount:;
- (id)impressions;
- (void)setImpressions:;
- (void).cxx_destruct;
+ (id)impressionsJSONTransformer;
+ (id)tagRateListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
