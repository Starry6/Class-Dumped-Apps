@interface AWEFavoritePOIListResponseModel : AWEBaseApiModel
@property (nonatomic) NSArray poiList;
@property (nonatomic) NSArray poiListNationwide;
@property (nonatomic) NSArray nearbyPoiList;
@property (nonatomic) NSArray recommendationPoiList;
@property (nonatomic) NSNumber cursor;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) AWEFavoritePOISelectorModel selector;
- (void)setPoiList:;
- (id)poiList;
- (id)poiListNationwide;
- (void)setPoiListNationwide:;
- (id)nearbyPoiList;
- (void)setNearbyPoiList:;
- (id)recommendationPoiList;
- (void)setRecommendationPoiList:;
- (id)cursor;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void)setCursor:;
- (void).cxx_destruct;
- (void)setSelector:;
- (id)selector;
+ (id)poiListJSONTransformer;
+ (id)poiListNationwideJSONTransformer;
+ (id)nearbyPoiListJSONTransformer;
+ (id)recommendationPoiListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
