@interface AWEStudioEffectCacheManager : NSObject
+ (void)cancelStudioCacheCleanIfNeeded;
+ (void)p_EffectPlatformCacheTrimToCost;
+ (void)startStudioCacheClean;
@end
