@interface AWESupportUnifyAIGCEditLoadingABConfig : NSObject
+ (BOOL)getSupportUnifyAigcEditLoading;
+ (BOOL)isSupportAiprocess:;
+ (long long)getHighConsuming;
+ (long long)getLowConsumingWithLoraType:;
+ (long long)getLowConsuming;
+ (long long)getTemplateLowConsuming;
+ (long long)getTemplateHighConsuming;
+ (long long)getTemplateConsuming;
+ (long long)getPollingConfigAsyncInterval;
+ (long long)getPollingConfigSyncInterval;
+ (long long)getTemplatePollingConfigSyncInterval;
+ (long long)getTemplatePollingConfigAsyncInterval;
@end
