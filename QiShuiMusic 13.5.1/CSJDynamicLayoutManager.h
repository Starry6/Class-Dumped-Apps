@interface CSJDynamicLayoutManager : CSJRemoteEngineManager
@property (nonatomic) CSJRenderEngineConfig config;
@property (nonatomic) CSJRenderMainAllProvider mainAllProvider;
@property (nonatomic) CSJRenderInteractionProvider interactionProvider;
@property (nonatomic) CSJRenderDSLProvider dslProvider;
- (id)mainAllProvider;
- (void)setDslProvider:;
- (id)cacheExistTemplateDataWithSlotId:;
- (void)cacheTemplateDataWithSlotId:h5CacheMutArray:ugenV3CacheMutArray:;
- (id)dslProvider;
- (void)fetchTemplateDataWithSlotId:model:completionBlock:;
- (void)fetchTemplateWithDCChanged:;
- (void)interaction_fetchTemplateWithDCChanged:;
- (id)mainTemplateModelWithTemplateDataModel:;
- (void)setInteractionProvider:;
- (void)setMainAllProvider:;
- (id)templateDataModelWithTemplateDataModel:;
- (id)templateResourceLocalURLWithURL:;
- (id)v1MainTemplateModel;
- (id)init;
- (void)setConfig:;
- (void).cxx_destruct;
- (id)config;
- (id)interactionProvider;
+ (void)deleteAllLocalData;
+ (id)sharedInstance;
@end
