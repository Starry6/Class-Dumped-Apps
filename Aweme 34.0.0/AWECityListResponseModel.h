@interface AWECityListResponseModel : AWEBaseApiModel
@property (nonatomic) NSArray allCities;
@property (nonatomic) NSArray hotCities;
@property (nonatomic) NSArray historyCities;
@property (nonatomic) AWECityModel currentCity;
- (id)historyCities;
- (void)setHistoryCities:;
- (id)hotCities;
- (void)setHotCities:;
- (void)setAllCities:;
- (void).cxx_destruct;
- (id)allCities;
- (void)setCurrentCity:;
- (id)currentCity;
+ (BOOL)automaticallyDefaultMapping;
+ (id)hotCitiesJSONTransformer;
+ (id)allCitiesJSONTransformer;
+ (id)historyCitiesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
