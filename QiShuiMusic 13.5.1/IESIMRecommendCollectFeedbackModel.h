@interface IESIMRecommendCollectFeedbackModel : IESIMBaseApiModel
@property (nonatomic) q exposureSecondinMs;
@property (nonatomic) NSString text;
@property (nonatomic) IESIMURLModel iconUrl;
- (id)iconUrl;
- (long long)exposureSecondinMs;
- (void)setExposureSecondinMs:;
- (void)setIconUrl:;
- (void)setText:;
- (void).cxx_destruct;
- (id)text;
+ (id)iconUrlJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
