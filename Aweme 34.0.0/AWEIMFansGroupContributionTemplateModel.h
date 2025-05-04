@interface AWEIMFansGroupContributionTemplateModel : AWEBaseApiModel
@property (nonatomic) NSURL icon;
@property (nonatomic) NSString title;
@property (nonatomic) NSString contributionInfoTemplate;
@property (nonatomic) NSArray templateParams;
@property (nonatomic) NSString ratioTitle;
@property (nonatomic) NSString ratioValue;
@property (nonatomic) q type;
- (id)templateParams;
- (void)setTemplateParams:;
- (void)setRatioValue:;
- (id)contributionInfoTemplate;
- (void)setContributionInfoTemplate:;
- (id)ratioTitle;
- (void)setRatioTitle:;
- (id)icon;
- (long long)type;
- (void)setType:;
- (void)setIcon:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (id)ratioValue;
+ (id)templateParamsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
