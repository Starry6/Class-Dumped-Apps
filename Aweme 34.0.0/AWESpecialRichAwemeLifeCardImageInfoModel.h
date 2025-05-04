@interface AWESpecialRichAwemeLifeCardImageInfoModel : AWEBaseApiModel
@property (nonatomic) q type;
@property (nonatomic) NSString title;
@property (nonatomic) NSString desc;
@property (nonatomic) AWESpecialRichAwemeLifeCardImageSpuInfoModel spuInfoModel;
@property (nonatomic) AWESpecialRichAwemeLifeLifeCardImagePOIInfoModel poiInfo;
@property (nonatomic) NSArray tabInfo;
@property (nonatomic) NSString extra;
- (void)setExtra:;
- (id)poiInfo;
- (void)setPoiInfo:;
- (id)spuInfoModel;
- (void)setSpuInfoModel:;
- (id)extra;
- (void)setDesc:;
- (long long)type;
- (id)desc;
- (void)setType:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (id)tabInfo;
- (void)setTabInfo:;
+ (id)poiInfoJSONTransformer;
+ (id)spuInfoModelJSONTransformer;
+ (id)tabInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
