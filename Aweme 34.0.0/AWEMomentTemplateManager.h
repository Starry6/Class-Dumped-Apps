@interface AWEMomentTemplateManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (void)fetchValidMomentTemplates:completionHandle:;
+ (void)fetchTemplateModelWithInfo:completion:;
+ (void)fetchMomentTemplate:progressBlock:completion:;
+ (void)batchFetchMomentTemplate:limitCount:progressBlock:completion:;
+ (void)batchFetchTemplateModelWithInfoArray:templateSource:completion:;
+ (void)batchFetchTemplateModelWithInfoArray:completion:;
+ (void)fetchMomentTemplateModels:templateSource:completionHandle:;
+ (void)fetchMomentTemplateModels:completionHandle:;
+ (void)verfifyTemplate:callback:progressBlock:;
+ (void)p_assembleSegInfos:withAssets:;
@end
