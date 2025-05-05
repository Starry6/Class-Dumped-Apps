@interface BDUGDeviceUnionCacheManager : NSObject
@property (nonatomic) MMKV cache;
- (id)getObjectOfClass:forKey:;
- (BOOL)setString:forKey:withExpiredTimestampMS:;
- (BOOL)containsKey:;
- (BOOL)setString:forKey:;
- (id)init;
- (BOOL)setObject:forKey:;
- (BOOL)setDictionary:forKey:;
- (BOOL)setBool:forKey:;
- (BOOL)boolForKey:;
- (void)setCache:;
- (id)stringForKey:;
- (void)removeAllObjects;
- (void)removeObjectsForKeys:;
- (id)stringForKey:defaultValue:;
- (BOOL)boolForKey:defaultValue:;
- (void).cxx_destruct;
- (id)cache;
- (void)removeObjectForKey:;
- (id)dictionaryForKey:;
- (BOOL)setInt64:forKey:;
- (long long)int64ForKey:;
+ (id)sharedInstance;
@end
