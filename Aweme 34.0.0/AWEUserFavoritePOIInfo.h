@interface AWEUserFavoritePOIInfo : MTLModel
@property (nonatomic) q collectType;
@property (nonatomic) AWEPOIContentItemModel poiDetail;
@property (nonatomic) AWEPOISpuInfoModel spuInfo;
@property (nonatomic) AWEAwemeModel aweme;
@property (nonatomic) AWEUserFavouritePOIMapIconModel mapIcon;
@property (nonatomic) AWEPOISpuModel spu;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)aweme;
- (void)setAweme:;
- (id)spuInfo;
- (void)setSpuInfo:;
- (long long)collectType;
- (void)setCollectType:;
- (id)poiDetail;
- (void)setPoiDetail:;
- (void)setMapIcon:;
- (id)spu;
- (void)setSpu:;
- (void).cxx_destruct;
- (id)mapIcon;
+ (id)JSONKeyPathsByPropertyKey;
@end
