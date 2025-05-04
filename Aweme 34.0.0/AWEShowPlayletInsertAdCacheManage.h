@interface AWEShowPlayletInsertAdCacheManage : NSObject
@property (nonatomic) NSMutableDictionary adCache;
@property (nonatomic) q cacheValidityInterval;
@property (nonatomic) q playletAdLiveCacheTime;
- (void)cacheAdModels:withPage:;
- (void)removeAdModel:;
- (id)getValidAdModel:withPage:;
- (void)setAdCache:;
- (void)setCacheValidityInterval:;
- (void)setPlayletAdLiveCacheTime:;
- (void)cacheSingleAdModel:withPage:;
- (void)cleanExpiredAds;
- (id)adCache;
- (long long)cacheValidityInterval;
- (long long)playletAdLiveCacheTime;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
