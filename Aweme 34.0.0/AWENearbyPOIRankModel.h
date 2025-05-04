@interface AWENearbyPOIRankModel : AWEBaseApiModel
@property (nonatomic) NSString title;
@property (nonatomic) NSString code;
@property (nonatomic) NSString subTitle;
@property (nonatomic) NSString cityCode;
@property (nonatomic) AWENearbyPOIRankSchemaModel schemaModel;
@property (nonatomic) NSArray poiItems;
@property (nonatomic) AWEURLModel titleImageURL;
@property (nonatomic) NSString cityName;
- (id)schemaModel;
- (void)setSchemaModel:;
- (id)poiItems;
- (void)setPoiItems:;
- (id)titleImageURL;
- (void)setTitleImageURL:;
- (id)code;
- (void)setCode:;
- (void)setSubTitle:;
- (id)subTitle;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (id)cityCode;
- (void)setCityCode:;
- (id)cityName;
- (void)setCityName:;
+ (id)poiItemsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
