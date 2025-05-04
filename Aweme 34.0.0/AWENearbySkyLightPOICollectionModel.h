@interface AWENearbySkyLightPOICollectionModel : MTLModel
@property (nonatomic) NSString poiID;
@property (nonatomic) NSString poiItemID;
@property (nonatomic) NSString poiName;
@property (nonatomic) NSString distance;
@property (nonatomic) AWEURLModel coverUrl;
@property (nonatomic) BOOL isRecommend;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)poiID;
- (id)poiName;
- (void)setCoverUrl:;
- (id)coverUrl;
- (void)setPoiName:;
- (void)setPoiID:;
- (BOOL)isRecommend;
- (void)setIsRecommend:;
- (id)poiItemID;
- (void)setPoiItemID:;
- (void)setDistance:;
- (id)distance;
- (void).cxx_destruct;
+ (id)coverUrlJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
