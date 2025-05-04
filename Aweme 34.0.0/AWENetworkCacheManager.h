@interface AWENetworkCacheManager : NSObject
@property (nonatomic) <AWENetworkCacheType> cache;
@property (nonatomic) AWENetworkSafeArray fetchingArray;
- (id)fetchingArray;
- (void)setFetchingArray:;
- (void)setCache:;
- (id)cache;
- (void).cxx_destruct;
+ (BOOL)isPrefetching;
+ (void)cleanCacheForKey:;
+ (id)cacheKeyFromURLString:params:;
+ (void)cleanCacheForURLString:params:;
+ (void)cleanAllCaches;
+ (void)setCacheIfNeededWithStrategy:jsonObj:;
+ (void)fetchCacheWithStrategy:modelClass:cacheblock:;
+ (id)modelization:modelClass:;
+ (id)processingCacheWithURLString:params:modelClass:cacheStrategy:completion:;
+ (id)cacheOnErrorWithURLString:params:modelClass:cacheStrategy:completion:;
+ (id)disableCacheGetWithURLString:params:modelClass:completion:;
+ (void)cleanCacheForTask:;
+ (BOOL)isPrefetchingWithKey:;
+ (BOOL)isPrefetchingWithURLString:params:;
+ (void)configureCacheWithMemoryLimit:;
+ (void)setCache:;
+ (id)manager;
@end
