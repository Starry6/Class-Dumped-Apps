@interface CSJRenderDSLProvider : NSObject
@property (nonatomic) CSJRenderEngineConfig config;
@property (nonatomic) CSJRenderMainProvider mainProvider;
@property (nonatomic) BUPersistence persistence_templateData;
- (id)cacheExistTemplateDataWithSlotId:;
- (void)cacheTemplateDataWithSlotId:h5CacheMutArray:ugenV3CacheMutArray:;
- (void)fetchTemplateDataWithSlotId:model:completionBlock:;
- (id)initWithConfig:mainProvider:;
- (id)mainProvider;
- (void)pbu_checkTemplateDataCountWithLatestTemplateDataModel:;
- (void)pbu_downloadTemplateDataWithModel:successBlock:;
- (void)pbu_printWithTemplateDataArray:prefix:;
- (void)pbu_replaceTemplateDataWithSlotId:templateDataModel:;
- (void)pbu_saveTemplateDataWithLatestTemplateDataModel:;
- (id)pbu_templateDataPersistence;
- (id)persistence_templateData;
- (void)readLocalData;
- (void)setMainProvider:;
- (void)setPersistence_templateData:;
- (id)templateDataModelWithTemplateDataModel:;
- (void)setConfig:;
- (void).cxx_destruct;
- (id)persistenceKey;
- (id)config;
- (void)deleteLocalData;
@end
