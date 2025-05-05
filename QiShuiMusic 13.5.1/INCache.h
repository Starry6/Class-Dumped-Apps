@interface INCache : NSObject
@property (nonatomic) NSCache _cacheDictionary;
- (id)init;
- (void).cxx_destruct;
- (id)_init;
- (id)_cacheDictionary;
- (void)addCacheableObject:;
- (void)removeCacheableObject:;
- (id)cacheableObjectForIdentifier:;
- (id)consumeCacheableObjectForIdentifier:;
- (void)removeAllCacheableObjects;
+ (id)sharedCache;
@end
