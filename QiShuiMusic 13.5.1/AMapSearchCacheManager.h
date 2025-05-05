@interface AMapSearchCacheManager : NSObject
@property (nonatomic) AMapMemoryCache regeoMemoryCache;
@property (nonatomic) AMapMemoryCache geoMemoryCache;
@property (nonatomic) AMapMemoryCache poiKeyWordMemoryCache;
@property (nonatomic) AMapMemoryCache aroundMemoryCache;
- (void)addRequestNode:requestOnwer:forKey:;
- (id)aroundMemoryCache;
- (id)checkHitRequestingSearch:;
- (id)geoMemoryCache;
- (void)handleCacheRequesting:response:error:;
- (id)memoryCacheWithType:;
- (id)objectForRequest:;
- (id)poiKeyWordMemoryCache;
- (id)regeoMemoryCache;
- (void)removeRequestNodeForRequest:;
- (id)requestNodesForRequest:;
- (void)setAroundMemoryCache:;
- (void)setGeoMemoryCache:;
- (void)setObject:forRequest:;
- (void)setPoiKeyWordMemoryCache:;
- (void)setRegeoMemoryCache:;
- (void)updateRegeoMemoryCache;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
