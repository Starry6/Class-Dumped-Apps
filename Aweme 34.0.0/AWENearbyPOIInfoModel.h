@interface AWENearbyPOIInfoModel : AWEBaseApiModel
@property (nonatomic) NSArray danmakuList;
@property (nonatomic) AWENearbyPOITagRateInfoModel tagRateInfo;
@property (nonatomic) AWEPOISpuModel spuInfo;
@property (nonatomic) AWENearbyPOIContentModel simplePOIInfo;
@property (nonatomic) q poiSpuCount;
@property (nonatomic) NSString spuServiceType;
@property (nonatomic) BOOL isFavorite;
- (id)tagRateInfo;
- (id)spuInfo;
- (void)setSpuInfo:;
- (void)setTagRateInfo:;
- (id)danmakuList;
- (void)setDanmakuList:;
- (id)simplePOIInfo;
- (id)spuServiceType;
- (void)setSimplePOIInfo:;
- (long long)poiSpuCount;
- (void)setPoiSpuCount:;
- (void).cxx_destruct;
- (BOOL)isFavorite;
- (void)setIsFavorite:;
+ (id)danmakuListJSONTransformer;
+ (id)simplePOIInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)tagRateInfoJSONTransformer;
+ (id)spuInfoJSONTransformer;
@end
