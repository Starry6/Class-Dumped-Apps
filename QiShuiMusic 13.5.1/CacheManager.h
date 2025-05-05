@interface CacheManager : NSObject
+ (unsigned long long)calculateDirectorySize:;
+ (id)getAutoCachesSize;
+ (void)clearAppCachesWithToastAndExit;
+ (void)clearAppCachesWithCompletion:;
@end
