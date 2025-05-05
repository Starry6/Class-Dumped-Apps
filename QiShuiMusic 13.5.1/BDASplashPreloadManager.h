@interface BDASplashPreloadManager : NSObject
+ (void)downloadNormalCreativeResourceWithModel:;
+ (void)downloadRealtimeModels:expireAds:;
+ (void)downloadTopViewResourceWithModel:;
+ (void)downloadWithModels:expireAds:;
+ (BOOL)isPreloadFit;
+ (void)preloadWithData:;
+ (void)preloadWithModels:expireAds:;
+ (void)trackBeginRequest;
+ (void)trackDownloadEventWithModel:isSuccess:downloadCount:isNecessary:isRealtime:;
+ (void)trackDownloadStartWithModel:isNecessary:isRealtime:;
+ (void)trackResponseWith:isSuccess:;
+ (void)preload;
@end
