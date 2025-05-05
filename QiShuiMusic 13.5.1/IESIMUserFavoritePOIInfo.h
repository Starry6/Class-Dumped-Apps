@interface IESIMUserFavoritePOIInfo : MTLModel
@property (nonatomic) q collectType;
@property (nonatomic) IESIMPOIContentItemModel poiDetail;
@property (nonatomic) IESIMPOISpuInfoModel spuInfo;
@property (nonatomic) IESIMAwemeModel aweme;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setCollectType:;
- (id)spuInfo;
- (id)aweme;
- (long long)collectType;
- (id)poiDetail;
- (void)setAweme:;
- (void)setPoiDetail:;
- (void)setSpuInfo:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
