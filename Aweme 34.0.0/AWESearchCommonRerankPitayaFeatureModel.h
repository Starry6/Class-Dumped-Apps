@interface AWESearchCommonRerankPitayaFeatureModel : AWEBaseApiModel
@property (nonatomic) NSArray docFeatures;
@property (nonatomic) NSString sessionFeature;
- (void)setDocFeatures:;
- (void)setSessionFeature:;
- (id)docFeatures;
- (void).cxx_destruct;
- (id)sessionFeature;
+ (id)docFeaturesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
