@interface AWEMVChannelCacheSettings : NSObject
+ (long long)firstCacheDirectoryMaxSizeMB;
+ (id)cacheConfig;
+ (BOOL)preloadVideoEnable;
+ (long long)strategyForFirstRenderCache;
+ (BOOL)enableFirstRenderCache;
+ (BOOL)shouldUseExposedCache;
+ (BOOL)cacheExpiredOptimizeEnable;
+ (long long)cacheExpiredMaxCount;
+ (long long)cacheAvailableMinCount;
+ (BOOL)saveToDiskOnlyBackground;
+ (BOOL)requestCacheEnable;
+ (long long)cachePrefetchStrategyQueryRetryTimesForOutside;
+ (BOOL)cachePrefetchEnableStrategyQueryForOutside;
+ (double)cachePrefetchStrategyQueryTimeoutMS;
+ (double)cachePrefetchStrategyQueryRetryIntervalSecForOutside;
+ (long long)requestTimerSecond;
+ (double)firstRequestDelaySeconds;
+ (BOOL)cachePrefetchEnableStrategyQueryForInside;
+ (long long)cachePrefetchStrategyQueryRetryTimesForInside;
+ (long long)requestRetryMaxTimes;
+ (double)cachePrefetchStrategyQueryRetryIntervalSecForInside;
+ (double)requestRetryDelayInSeconds;
+ (long long)useCacheMaxCount;
+ (BOOL)disablePreloadInReplaceCacheStrategy;
+ (BOOL)isReadOptimize;
+ (BOOL)readInHighPriorityQueueEnable;
+ (BOOL)unconsumedCacheEnable;
+ (BOOL)useRefreshResponseCacheEnable;
+ (BOOL)refreshResponseCacheOnlySaveFirst;
+ (long long)refreshResponseCacheSaveMaxItemCount;
+ (double)refreshResponseCacheWriteDiskDelaySeconds;
+ (BOOL)preloadImageEnable;
+ (BOOL)preloadImageWifiOnly;
+ (long long)preloadImageMaxCount;
+ (BOOL)insulatedImageCacheEnable;
+ (BOOL)preloadImageOptionsOptimize;
+ (BOOL)enableLaunchCachePrefetchIcon;
+ (BOOL)preloadVideoWifiOnly;
+ (long long)preloadVideoSizeKB;
+ (id)preloadVideoConfig;
+ (id)expiredOptimizeConfig;
+ (id)cachePrefetchConfig;
+ (BOOL)enableAppendCache;
+ (BOOL)enableInsertCompatibleCache;
+ (BOOL)disableAutoPlayCacheCellInReplaceCacheStrategy;
+ (double)forceInsertTimeOut;
+ (BOOL)enableWriteCacheVCDisappear;
+ (BOOL)preReadCacheEnable;
+ (BOOL)replaceCacheWithAnimation;
+ (BOOL)replaceCacheWithAnimationFix;
+ (BOOL)replaceCacheAnimationStartWhenWillAppear;
+ (BOOL)enableCacheVideoContinuePlay;
+ (long long)insulatedImageCacheSeparatedMode;
+ (long long)insulatedImageCacheCountLimitInMemory;
+ (long long)insulatedImageCacheCountLimitInDisk;
+ (double)insulatedImageCacheDiskAgeLimit;
+ (long long)preloadVideoPriorityLevel;
+ (BOOL)preloadVideoTiming:;
+ (double)cacheExpirationTime;
@end
