@interface SSCacheObjectStore : NSObject
- (id)initWithSessionIdentifier:;
- (void)dealloc;
- (id)description;
- (void)clearSession;
- (id)_factoryForTypeIdentifier:;
- (BOOL)addObject:withItemIdentifier:;
- (BOOL)removeObjectWithItemIdentifier:;
- (id)cacheObjectWithItemIdentifier:;
- (void)addCacheObjectFactory:;
- (void)removeCacheObjectFactory:;
@end
