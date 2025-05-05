@interface IESGurdClearCacheManager : NSObject
+ (void)clearCacheForAccessKey:channel:;
+ (void)clearCacheForAccessKey:channel:completion:;
+ (void)clearCacheForAccessKey:channel:isSync:completion:;
+ (void)clearCacheWithUniversalStrategies:logInfo:;
+ (id)sharedManager;
@end
