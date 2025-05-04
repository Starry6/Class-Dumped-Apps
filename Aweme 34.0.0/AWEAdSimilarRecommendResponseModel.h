@interface AWEAdSimilarRecommendResponseModel : AWEBaseApiModel
@property (nonatomic) AWEAwemeResponseModel response;
@property (nonatomic) NSString recommendTitle;
- (id)recommendTitle;
- (void)setRecommendTitle:;
- (id)response;
- (void).cxx_destruct;
- (void)setResponse:;
+ (id)responseJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
