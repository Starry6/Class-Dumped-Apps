@interface BDXGurdService : NSObject
+ (void)clearCacheForAccessKey:channel:;
+ (void)cancelTaskWithAK:channel:;
+ (id)dataForPath:accessKey:channel:;
+ (long long)fileTypeForAccessKey:channel:;
+ (BOOL)hasCacheForPath:accessKey:channel:;
+ (BOOL)isRequestThrottledWithStatusDictionary:;
+ (unsigned long long)packageVersionForAccessKey:channel:;
+ (void)registerAccessKey:;
+ (id)rootDirectoryForAccessKey:;
+ (id)rootDirectoryForAccessKey:channel:;
+ (void)syncResourcesWithTask:completion:;
@end
