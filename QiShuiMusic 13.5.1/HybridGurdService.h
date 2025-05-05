@interface HybridGurdService : NSObject
+ (void)clearCacheForAccessKey:channel:;
+ (id)dataForPath:accessKey:channel:;
+ (long long)fileTypeForAccessKey:channel:;
+ (BOOL)hasCacheForPath:accessKey:channel:;
+ (BOOL)isRequestThrottledWithStatusDictionary:;
+ (unsigned long long)packageVersionForAccessKey:channel:;
+ (void)registerAccessKey:;
+ (id)rootDirectoryForAccessKey:;
+ (id)rootDirectoryForAccessKey:channel:;
+ (void)syncResourcesWithTask:completion:;
+ (id)accessKey;
+ (void)setupIfNeeded;
+ (id)configDelegate;
+ (void)setConfigDelegate:;
@end
