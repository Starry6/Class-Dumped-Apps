@interface AWEIMOfficialNoticeDisableStructModel : IESIMBaseApiModel
@property (nonatomic) AWEIMOfficialNoticeDisableConfigStructModel serviceAccountModel;
@property (nonatomic) AWEIMOfficialNoticeDisableConfigStructModel subCategoryModel;
- (void)setServiceAccountModel:;
- (void)setSubCategoryModel:;
- (id)serviceAccountModel;
- (id)subCategoryModel;
- (void).cxx_destruct;
+ (id)serviceAccountModelJSONTransformer;
+ (id)subCategoryModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
