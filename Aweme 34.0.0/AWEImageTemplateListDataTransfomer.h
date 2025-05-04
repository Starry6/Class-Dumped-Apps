@interface AWEImageTemplateListDataTransfomer : NSObject
@property (nonatomic) NSArray templateCategoriesArray;
@property (nonatomic) NSArray imageTemplatesArray;
@property (nonatomic) AWETemplateListTemplateInfoResponseModel insertTemplateModel;
@property (nonatomic) BOOL shouldInsertTemplateAtFirst;
- (void)getTemplateListWithPannelResponseModel:templateCategoriesArray:shouldInsertTemplateAtFirst:insertTemplateModel:completion:;
- (void)setShouldInsertTemplateAtFirst:;
- (BOOL)shouldInsertTemplateAtFirst;
- (id)templateCategoriesArray;
- (id)imageTemplatesArray;
- (id)insertTemplateModel;
- (void)setInsertTemplateModel:;
- (void)getTheTemplateListWithCategoryModel:templateInfoModel:templateCategoriesArray:shouldInsertTemplateAtFirst:insertTemplateID:insertTemplateModel:completion:;
- (void)getTemplateListWithCategoryResponseModel:shouldInsertTemplateAtFirst:insertTemplateModel:completion:;
- (void)setImageTemplatesArray:;
- (void)setTemplateCategoriesArray:;
- (void)storeCategoryInfoAndDefaultTemplateListResourceWithModel:insertTemplateID:;
- (void)insertTheTemplateAtFirstWith:;
- (void)storeTemplateListsOfOtherCategoriesResourceWithModel:insertTemplateID:;
- (id)findCurrentCategoryModelWithName:isDefault:;
- (void)setupTemplateArrayWithCategoryModel:templateInfoArray:insertTemplateID:;
- (id)doTheFirstInsertCheckForArray:withInsertTemplateID:;
- (void)dealloc;
- (void).cxx_destruct;
+ (id)getTemplateInfoModelWithDetailResponseModel:;
+ (id)errorOfImageTemplateFetch;
@end
