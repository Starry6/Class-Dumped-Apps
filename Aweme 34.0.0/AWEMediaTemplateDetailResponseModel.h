@interface AWEMediaTemplateDetailResponseModel : AWEBaseApiModel
@property (nonatomic) AWEMediaTemplateCategoryDataResponseModel categoryData;
@property (nonatomic) AWEMediaTemplateModel templateModel;
@property (nonatomic) AWEMediaTemplateFilteredTemplateModel filterReason;
- (id)filterReason;
- (void)setFilterReason:;
- (void).cxx_destruct;
- (void)setTemplateModel:;
- (id)templateModel;
- (id)categoryData;
- (void)setCategoryData:;
+ (id)categoryDataJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
