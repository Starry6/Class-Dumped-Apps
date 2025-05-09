@interface AWESearchPOIRichSugModel : AWEBaseApiModel
@property (nonatomic) NSString avgPriceText;
@property (nonatomic) NSString locationText;
@property (nonatomic) NSString poiName;
@property (nonatomic) NSString poiType;
@property (nonatomic) NSString distanceText;
@property (nonatomic) NSString poiID;
@property (nonatomic) NSString poiImageURL;
@property (nonatomic) double avgPrice;
@property (nonatomic) double distance;
- (id)poiID;
- (id)poiName;
- (void)setPoiName:;
- (void)setPoiID:;
- (double)avgPrice;
- (void)setAvgPrice:;
- (id)distanceText;
- (void)setDistanceText:;
- (void)setAvgPriceText:;
- (id)poiImageURL;
- (void)setPoiImageURL:;
- (id)avgPriceText;
- (void)setDistance:;
- (double)distance;
- (void).cxx_destruct;
- (id)poiType;
- (id)locationText;
- (void)setLocationText:;
- (void)setPoiType:;
+ (id)JSONKeyPathsByPropertyKey;
@end
