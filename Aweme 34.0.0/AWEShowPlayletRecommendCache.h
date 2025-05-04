@interface AWEShowPlayletRecommendCache : NSObject
@property (nonatomic) NSMutableDictionary cachedDic;
- (void)clearAllCache;
- (void)preloadRecommendFeedBySchema:;
- (void)setCachedDic:;
- (id)cacheKeyForSchema:;
- (id)cachedDataByKey:;
- (void)cacheData:byKey:;
- (id)cachedDic;
- (void)clearCacheByKey:;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
