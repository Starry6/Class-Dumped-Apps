@interface IESGurdCacheManager : NSObject
+ (void)clearCacheForAccessKey:channel:;
+ (void)asyncGetDataForPath:accessKey:channel:completion:;
+ (BOOL)isLazyRequest:;
+ (BOOL)needRequest:;
+ (unsigned long long)packageVersionForAccessKey:channel:;
+ (void)syncResourcesWithParams:completion:;
@end
