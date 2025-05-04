@interface AWEPOIDetailNetworkPrefetchSharedData : NSObject
@property (nonatomic) NSMutableDictionary data;
@property (nonatomic) NSMutableArray keys;
- (id)generatePoiEnterID;
- (void)setPoiEnterID:forKey:;
- (id)generatePoiEnterIDWithKey:;
- (id)poiEnterIDForKey:;
- (void)removePoiEnterIDWithCacheKey:;
- (void)setKeys:;
- (id)init;
- (void)setData:;
- (id)keys;
- (void).cxx_destruct;
- (id)data;
+ (id)sharedInstance;
@end
