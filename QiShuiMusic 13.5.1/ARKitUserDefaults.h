@interface ARKitUserDefaults : NSObject
+ (float)floatForKey:;
+ (id)cachedObjectForKey:;
+ (id)valueForKey:;
+ (void)setValue:forKey:;
+ (void)setObject:forKey:;
+ (id)numberForKey:;
+ (void)cacheObject:forKey:;
+ (void)setBool:forKey:;
+ (id)defaultValues;
+ (void)removeCachedObjectForKey:;
+ (BOOL)boolForKey:;
+ (id)keysApprovedForProcessEnvironmentOverride;
+ (id)stringForKey:;
+ (void)synchronize;
+ (id)resolutionDictionaryForKey:;
+ (void)removeAllKeys;
+ (id)userDefaultsCache;
+ (id)objectForKey:;
+ (double)doubleForKey:;
+ (BOOL)shouldUseCache;
+ (void)clearUserDefaultsCache;
+ (id)objectForKey:useCache:;
+ (void)removeObjectForKey:;
+ (long long)integerForKey:;
+ (id)listForKey:;
+ (id)objectForKeySlow:;
@end
