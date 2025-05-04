@interface AWEEnterpriseTagModel : AWEBaseApiModel
@property (nonatomic) NSArray enterpriseTagInfos;
@property (nonatomic) AWEEnterpriseToastInfoModel enterpriseToastInfos;
- (id)enterpriseTagInfos;
- (void)setEnterpriseTagInfos:;
- (id)enterpriseToastInfos;
- (void)setEnterpriseToastInfos:;
- (void).cxx_destruct;
+ (id)enterpriseTagInfosJSONTransformer;
+ (id)enterpriseToastInfosJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
