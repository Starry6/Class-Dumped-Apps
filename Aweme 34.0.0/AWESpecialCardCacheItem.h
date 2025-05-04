@interface AWESpecialCardCacheItem : NSObject
@property (nonatomic) NSMutableArray cacheModels;
@property (nonatomic) q maxCount;
- (long long)cacheCount;
- (id)cacheModelForAweme:;
- (id)cacheModels;
- (void)addCacheModel:;
- (BOOL)containsCacheModelForAweme:;
- (void)removeCacheModelForAweme:;
- (void)setCacheModels:;
- (void)setMaxCount:;
- (id)init;
- (long long)maxCount;
- (void)removeAll;
- (void).cxx_destruct;
@end
