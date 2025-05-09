@interface AWEImageTemplateModelDataRequestManager : NSObject
@property (nonatomic) NSMutableDictionary insertTemplateModelCacheDic;
@property (nonatomic) NSMutableDictionary pannelResponseModellCacheDic;
@property (nonatomic) NSMutableDictionary categoryResponseModelCacheDic;
@property (nonatomic) NSMutableDictionary templateCategoriesCacheDic;
@property (nonatomic) NSMutableDictionary templateFintuningResultCacheDic;
@property (nonatomic) NSMutableArray allInsertModelCallback;
@property (nonatomic) NSMutableArray allPannelModelCallback;
@property (nonatomic) NSMutableArray allCategoryModelCallback;
- (void)requestPannelResponseModelWithCommonParams:currentImageSize:templateScene:currentImageURI:cropImageInfo:trackParams:;
- (void)addPannelResponseModelCallback:;
- (void)cleanTemplateListDataCache;
- (void)cleanTemplateFinetuningResultCache;
- (void)requestCategoryResponseModelWithCommonParams:templateScene:categoryArray:trackParams:;
- (id)getPannelResponseModelWithImageURI:;
- (id)getCategoriesArrayWithTemplateScene:;
- (id)getCategoryResponseModelWithTemplateScene:;
- (void)addCategoryResponseModelCallback:;
- (id)getInsertTemplateModelWithTemplateID:;
- (void)requestInsertTemplateModelWithTemplateID:;
- (void)addFetchInsertModelCallback:;
- (void)insertTemplateModelCallBackWithModel:success:;
- (id)insertTemplateModelCacheDic;
- (id)panelKeyForTemplateScene:;
- (void)pannelResponseModelCallBackWithModel:success:;
- (id)pannelResponseModellCacheDic;
- (void)categoryResponseModelCallBackWithModel:success:;
- (id)templateCategoriesCacheDic;
- (id)categoryResponseModelCacheDic;
- (id)allInsertModelCallback;
- (id)allPannelModelCallback;
- (id)allCategoryModelCallback;
- (void)setPannelResponseModellCacheDic:;
- (void)setCategoryResponseModelCacheDic:;
- (void)setTemplateFintuningResultCacheDic:;
- (id)templateFintuningResultCacheDic;
- (void)adjustTemplatePositionByBachAlgorithmWithParams:completion:;
- (id)getTemplateFinetuningResultWithParams:;
- (void)setInsertTemplateModelCacheDic:;
- (void)setTemplateCategoriesCacheDic:;
- (void)setAllInsertModelCallback:;
- (void)setAllPannelModelCallback:;
- (void)setAllCategoryModelCallback:;
- (id)init;
- (void).cxx_destruct;
+ (id)errorOfImageTemplateFetch;
+ (void)fetchCategoryInfoAndDefaultTemplateListResourcePreloadWithParams:completion:;
+ (void)fetchTemplateListsOfOtherCategoriesResourceWithParams:completion:;
+ (id)sharedInstance;
@end
