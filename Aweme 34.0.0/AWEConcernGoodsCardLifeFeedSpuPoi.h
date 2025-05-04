@interface AWEConcernGoodsCardLifeFeedSpuPoi : MTLModel
@property (nonatomic) NSString poiId;
@property (nonatomic) NSString poiName;
@property (nonatomic) NSString distance;
@property (nonatomic) NSString poiNameV2;
@property (nonatomic) NSString poiNameV2Prefix;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)poiName;
- (void)setPoiName:;
- (id)poiNameV2;
- (void)setPoiNameV2:;
- (id)poiNameV2Prefix;
- (void)setPoiNameV2Prefix:;
- (void)setDistance:;
- (id)distance;
- (void).cxx_destruct;
- (id)poiId;
- (void)setPoiId:;
+ (id)JSONKeyPathsByPropertyKey;
@end
