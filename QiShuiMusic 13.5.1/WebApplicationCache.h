@interface WebApplicationCache : NSObject
+ (void)setMaximumSize:;
+ (long long)maximumSize;
+ (void)initializeWithBundleIdentifier:;
+ (long long)defaultOriginQuota;
+ (void)setDefaultOriginQuota:;
+ (long long)diskUsageForOrigin:;
+ (void)deleteAllApplicationCaches;
+ (void)deleteCacheForOrigin:;
+ (id)originsWithCache;
@end
