@interface AWESearchSugCacheConfig : NSObject
@property (nonatomic) NSMutableDictionary cacheConfigDict;
@property (nonatomic) BOOL enableCache;
@property (nonatomic) BOOL enableCrossSession;
@property (nonatomic) Q cacheMaxCount;
- (void)setCacheMaxCount:;
- (unsigned long long)cacheMaxCount;
- (id)cacheConfigDict;
- (void)saveCacheConfigDict;
- (void)setEnableCrossSession:;
- (BOOL)enableCrossSession;
- (void)updateCacheConfig:;
- (void)setCacheConfigDict:;
- (void).cxx_destruct;
- (void)setEnableCache:;
- (BOOL)enableCache;
+ (id)sharedInstance;
@end
