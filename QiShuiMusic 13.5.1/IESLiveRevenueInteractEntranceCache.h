@interface IESLiveRevenueInteractEntranceCache : NSObject
@property (nonatomic) RivalsRecommendResponse cacheData;
@property (nonatomic) q cacheType;
@property (nonatomic) q sourceType;
@property (nonatomic) double saveTiming;
@property (nonatomic) double shelfLife;
@property (nonatomic) BOOL hasHitCache;
- (id)dataReuseConfig;
- (void)setHasHitCache:;
- (id)cacheData;
- (id)cacheStrategyConfig;
- (BOOL)hasHitCache;
- (void)saveCacheData:loadType:sourceType:;
- (double)saveTiming;
- (void)setCacheData:;
- (void)setSaveTiming:;
- (void)setShelfLife:;
- (double)shelfLife;
- (long long)sourceType;
- (void)setSourceType:;
- (void).cxx_destruct;
- (long long)cacheType;
- (void)setCacheType:;
- (void)clean;
@end
