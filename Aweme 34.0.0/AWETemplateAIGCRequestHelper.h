@interface AWETemplateAIGCRequestHelper : NSObject
+ (id)convertToAIGCResourceModelsWithSlotInfos:templateId:;
+ (id)convertToPreprocessResourcesWithGenericTemplateAIGCResourceModels:;
+ (id)requestAIGCResultsWithResourceModels:templateId:isAsync:isUnifyInteraction:scene:targetFolder:aigcRequestMeta:completion:taskUnifyInteractionCompletion:;
+ (id)templateAIGCResourceModelFromPresetInfo:;
+ (id)buildRequestModelWithScene:templateId:isAsync:isUnifyInteraction:targetFolder:aigcRequestMeta:resourceModels:;
+ (id)getBusinessCompletedBlockWithResourceModels:aigcTask:completion:;
+ (id)convertToAIGCResourceInfoModelsWithGenericTemplateAIGCResourceModels:;
@end
