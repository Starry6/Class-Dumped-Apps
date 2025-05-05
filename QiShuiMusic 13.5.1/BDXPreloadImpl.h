@interface BDXPreloadImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (void)forceCleanWith:;
+ (void)bdxRouterPreloadResourceWith:strategy:taskConfig:callback:;
+ (BOOL)canPrefetchInRouter:cardModel:;
+ (void)dataWithRequestModel:completion:;
+ (void)findPreloadConfigWith:taskConfig:completion:;
+ (id)getCacheWith:;
+ (void)preloadResourceWith:strategy:taskConfig:callback:;
+ (void)preloadWithBuilder:callback:;
+ (id)serviceBizID;
+ (unsigned long long)serviceScope;
+ (void)triggerAPIPrefetchAndPreloadResourceWith:strategy:taskConfig:callback:;
+ (void)triggerAPIPrefetchFor:;
+ (void)triggerAPIPrefetchFor:with:;
+ (void)triggerNewPrefetchIfNeeded:cardModel:;
+ (void)triggerPrefetchIfNeeded:cardModel:;
+ (void)triggerPrefetchWithCardModel:;
+ (void)triggerPrefetchWithSchema:config:;
+ (unsigned long long)serviceType;
@end
