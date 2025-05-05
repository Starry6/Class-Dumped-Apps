@interface BDXSchema : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (void)addInterceptor:;
+ (id)resolverWithSchema:contextInfo:;
+ (id)interceptorList;
+ (void)triggerForestPreload:accessKey:monitorId:isFromAnnieX:customUA:;
+ (BOOL)__hasViewCachedWithSchema:context:;
+ (BOOL)canPrefetchInRouter:contextInfo:;
+ (id)canUseBDXFromSetting:params:;
+ (id)extractURLDetail:withPrefix:;
+ (BOOL)isLynxContainerWith:;
+ (BOOL)isMatchRules:with:;
+ (void)prefetchMonitor:apis:contextInfo:state:;
+ (id)prefetchUrlWithSchema:;
+ (void)registerPrefetchInitDataIfNeeded:prefetchSchema:contextInfo:;
+ (void)removeInterceptor:;
+ (id)resolverWithSchema:contextInfo:paramClass:;
+ (id)serviceBizID;
+ (unsigned long long)serviceScope;
+ (void)triggerForestPreloadIfNeeded:context:;
+ (void)triggerNewPrefetchIfNeeded:contextInfo:;
+ (void)triggerPreLoadIfNeeded:contextInfo:;
+ (void)triggerPrefetch:enableNewPrefetch:;
+ (void)triggerPrefetchIfNeeded:contextInfo:;
+ (unsigned long long)serviceType;
@end
