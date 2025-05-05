@interface YYCache : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) YYMemoryCache memoryCache;
@property (nonatomic) YYDiskCache diskCache;
- (void)containsObjectForKey:withBlock:;
- (void)objectForKey:withBlock:;
- (void)removeAllObjectsWithBlock:;
- (void)removeAllObjectsWithProgressBlock:endBlock:;
- (void)removeObjectForKey:withBlock:;
- (void)setObject:forKey:withBlock:;
- (BOOL)containsObjectForKey:;
- (id)init;
- (void)setObject:forKey:;
- (void)addEntriesFromDictionary:;
- (id)diskCache;
- (id)initWithName:;
- (id)memoryCache;
- (void)removeAllObjects;
- (id)objectForKey:;
- (void).cxx_destruct;
- (id)initWithPath:;
- (id)description;
- (id)name;
- (void)removeObjectForKey:;
+ (id)cacheWithPath:;
+ (void)setYYCacheLRUDisable:;
+ (id)cacheWithName:;
@end
