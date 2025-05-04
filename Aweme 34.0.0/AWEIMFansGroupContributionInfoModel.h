@interface AWEIMFansGroupContributionInfoModel : AWEBaseApiModel
@property (nonatomic) NSString title;
@property (nonatomic) NSArray contributionTemplateList;
@property (nonatomic) NSString businessInfoUrl;
- (id)contributionTemplateList;
- (void)setContributionTemplateList:;
- (id)businessInfoUrl;
- (void)setBusinessInfoUrl:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
+ (id)contributionTemplateListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
