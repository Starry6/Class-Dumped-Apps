@interface AWEStudioEffectPrefetcher : NSObject
- (void)p_prefetchEffects;
- (void)p_startPrefetchSideslipEffects;
- (void)p_pausePrefetchSideslipEffects;
- (void)startConfigPreloadEffect;
- (void)toolPreloadEffect;
- (id)preloadEffectBussnessKey;
- (void)syncLoadPreDownloadWithBusinessKey:;
- (long long)preloadEffectBussnessID;
- (void)preDownloadEffectWithBusinessId:businessKey:extraParameters:;
- (void)pausePreloadEffect;
- (void)startMonitoring;
+ (id)shareInstance;
@end
