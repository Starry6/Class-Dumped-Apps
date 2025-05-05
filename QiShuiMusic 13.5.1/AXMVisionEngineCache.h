@interface AXMVisionEngineCache : NSObject
@property (nonatomic) q cacheSize;
- (long long)cacheSize;
- (id)initWithCacheSize:;
- (id)debugDescription;
- (void).cxx_destruct;
- (id)description;
- (void)purgeCache;
- (long long)_cacheQueue_cacheSize;
- (id)resultForKey:;
- (id)_cacheQueue_resultForKey:;
- (void)setResult:forKey:;
- (void)_cacheQueue_setResult:forKey:;
@end
