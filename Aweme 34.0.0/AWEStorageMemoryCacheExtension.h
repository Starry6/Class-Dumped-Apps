@interface AWEStorageMemoryCacheExtension : NSObject
+ (void)setObject:forKey:withCost:;
+ (void)setCacheExtensionEnable:;
+ (void)setCacheExtensionSize:;
+ (void)setDelegateForAWEStorageIfNeeded;
+ (void)cacheObject:forKey:encodeData:;
+ (BOOL)enable;
+ (id)memoryCache;
+ (void)removeObjectForKey:;
+ (id)objectForKey:;
+ (void)setObject:forKey:;
@end
