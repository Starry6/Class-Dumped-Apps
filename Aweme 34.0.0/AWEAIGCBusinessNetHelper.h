@interface AWEAIGCBusinessNetHelper : NSObject
+ (void)downloadImages:complete:;
+ (void)requestAiProcessWithParams:timeOut:completion:;
+ (void)requestGenerationQueryParams:timeOut:completion:;
+ (id)startUploadImages:extra:authParameters:result:;
+ (void)downloadPicturesWithUriModels:complete:;
+ (void)downloadVideoResoutModelWith:identifier:fileNameSuffix:complete:;
+ (void)requestUpdateRecordParams:timeOut:completion:;
+ (id)replaceReqJsonWith:modelId:;
+ (void)loraAiProcessDefaultLogicWith:forceAsync:completion:;
+ (void)getImageUploadAuthorInfo:;
+ (void)aiCommonGenerateWithRequestType:taskId:sceneId:sceneType:paramsJson:timeOut:completion:;
+ (void)aiSyncTextCreatePicturesWithRequestType:params:timeOut:completion:;
@end
