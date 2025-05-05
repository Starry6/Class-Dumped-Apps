@interface ISURLCache : NSObject
@property (nonatomic) NSString persistentIdentifier;
@property (nonatomic) Q currentDiskUsage;
@property (nonatomic) Q currentMemoryUsage;
@property (nonatomic) Q diskCapacity;
@property (nonatomic) Q memoryCapacity;
- (id)init;
- (void)dealloc;
- (unsigned long long)currentMemoryUsage;
- (unsigned long long)currentDiskUsage;
- (void)purgeMemoryCache;
- (void)storeCachedResponse:forRequest:;
- (void)removeAllCachedResponses;
- (id)persistentIdentifier;
- (void)removeCachedResponseForRequest:;
- (id)initWithCacheConfiguration:;
- (id)cachedResponseForRequest:;
- (unsigned long long)diskCapacity;
- (unsigned long long)memoryCapacity;
- (void)saveMemoryCacheToDisk;
- (void)reloadWithCacheConfiguration:;
+ (id)cacheDirectoryPath;
@end
