@interface AWENearbyInnerCachePreloadManager : NSObject
@property (nonatomic) NSMutableArray nearbyCacheAwemeList;
@property (nonatomic) NSMutableArray mallCacheAwemeList;
@property (nonatomic) double lastCacheGetTimeSt;
- (id)currentCityCode;
- (long long)cacheExpiredTime;
- (void)resetInnerCachePool:source:;
- (void)checkoutNearbyInnerCachePoolWithSource:;
- (id)hasVaildNearbyInnerCacheWithSource:;
- (long long)cachePoolNumWithSource:;
- (void)setNearbyCacheAwemeList:;
- (void)setMallCacheAwemeList:;
- (id)cacheAwemeListWithSource:;
- (void)reqNewCacheWithSource:;
- (BOOL)cacheIsExpired;
- (long long)cachePollCount;
- (long long)cacheReqThreshold;
- (double)lastCacheGetTimeSt;
- (void)setLastCacheGetTimeSt:;
- (id)nearbyCacheAwemeList;
- (id)mallCacheAwemeList;
- (id)innerCacheSettings;
- (void)getVaildNearbyInnerCacheWithSource:complete:;
- (id)init;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:;
- (id)copyWithZone:;
- (BOOL)enableCache;
+ (id)sharedInstance;
+ (id)allocWithZone:;
@end
