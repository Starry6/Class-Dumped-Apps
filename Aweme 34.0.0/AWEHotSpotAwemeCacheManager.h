@interface AWEHotSpotAwemeCacheManager : NSObject
+ (void)preloadAweme:sourceType:;
+ (void)preserveLowestBitrateWithAweme:;
+ (id)cacheKeyWithSourceType:;
+ (void)addCacheAwemeIDs:;
+ (void)filterHasCached:completion:;
+ (id)fetchCacheAwemeIDs;
+ (double)downloadPercentageWithPlayAddr:bitrate:aweme:;
+ (void)removeAwemesWithSourceType:;
+ (id)fetchCacheResultWithSourceType:filterExpired:;
+ (BOOL)checkIfAllResultsAreEmpty:;
+ (BOOL)checkIfAllResultsAreExpired:;
+ (id)fetchCacheAwemeModels:;
+ (void)filterUnavailableAwemes:completion:;
+ (long long)serverFilterCode2ConsumeStatus:;
+ (id)cacheResultWithSourceType:filterExpired:;
+ (BOOL)isCacheAwemeExpired:;
+ (void)cacheAwemes:sourceType:;
+ (void)fetchCacheAwemesWithSourceType:filterExpired:filterUnavailable:completion:;
@end
