@interface AWEMediaTemplateFetchCategoryResponseModel : AWEBaseApiModel
@property (nonatomic) AWEMediaTemplateCategoryDataResponseModel categoryData;
- (void).cxx_destruct;
- (id)categoryData;
- (void)setCategoryData:;
+ (id)categoryDataJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
