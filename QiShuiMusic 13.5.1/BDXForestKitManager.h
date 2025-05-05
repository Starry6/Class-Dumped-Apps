@interface BDXForestKitManager : NSObject
+ (BOOL)isForestEnabledWithSchemaParam:;
+ (void)triggerForestPreload:param:accessKey:monitorId:isFromAnnieX:ua:;
+ (void)updateForestPreloadMemCacheSize;
+ (void)updateForestGeneralMemCacheSize;
+ (void)closeSessionWithSchemaParams:;
+ (id)defaultForestKit;
+ (BOOL)isForestEnabled:;
+ (BOOL)isUrlString:inList:;
+ (long long)preloadTypeWithSchemaParam:schemaParam:isFromAnnieX:;
+ (id)requestParamsForSubResourceWithResourceModel:;
+ (id)requestParamsForTemplateWithResourceModel:;
+ (id)defaultConfig;
@end
