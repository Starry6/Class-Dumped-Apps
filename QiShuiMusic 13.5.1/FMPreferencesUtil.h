@interface FMPreferencesUtil : NSObject
+ (void)synchronizeDomain:user:;
+ (void)setBool:forKey:inDomain:;
+ (id)arrayForKey:inDomain:;
+ (BOOL)boolForKey:inDomain:user:;
+ (void)removeKey:inDomain:;
+ (id)dateForKey:inDomain:user:;
+ (id)dictionaryForKey:inDomain:;
+ (long long)integerForKey:inDomain:;
+ (id)dictionaryForKey:inDomain:user:;
+ (long long)integerForKey:inDomain:user:;
+ (void)setDictionary:forKey:inDomain:;
+ (id)objectForKey:inDomain:user:;
+ (id)dateForKey:inDomain:;
+ (id)stringForKey:inDomain:;
+ (id)stringForKey:inDomain:user:;
+ (void)setDate:forKey:inDomain:;
+ (BOOL)boolForKey:inDomain:;
+ (void)setArray:forKey:inDomain:;
+ (void)setData:forKey:inDomain:;
+ (void)setObject:forKey:inDomain:;
+ (id)arrayForKey:inDomain:user:;
+ (void)setString:forKey:inDomain:;
+ (id)dataForKey:inDomain:;
+ (id)objectForKey:inDomain:;
+ (void)synchronizeDomain:;
+ (void)setInteger:forKey:inDomain:;
+ (id)dataForKey:inDomain:user:;
@end
