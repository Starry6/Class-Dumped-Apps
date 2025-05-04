@interface AWEPOINearbyMapEntryModel : MTLModel
@property (nonatomic) AWEPOIInfoModel poiInfo;
@property (nonatomic) NSString nearbyRecommend;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)poiInfo;
- (void)setPoiInfo:;
- (id)nearbyRecommend;
- (void)setNearbyRecommend:;
- (void).cxx_destruct;
+ (id)poiInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
