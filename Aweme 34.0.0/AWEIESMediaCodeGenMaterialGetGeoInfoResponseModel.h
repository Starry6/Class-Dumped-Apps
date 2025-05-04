@interface AWEIESMediaCodeGenMaterialGetGeoInfoResponseModel : AWEBaseResponseModel
@property (nonatomic) NSString message;
@property (nonatomic) AWEIESMediaCodeGenLocationModel countryModel;
@property (nonatomic) AWEIESMediaCodeGenLocationModel cityModel;
@property (nonatomic) AWEIESMediaCodeGenLocationModel districtModel;
@property (nonatomic) NSArray subDivisionsModelArray;
@property (nonatomic) AWEIESMediaCodeGenPlaceModel placeModel;
@property (nonatomic) AWEIESMediaCodeGenPOIModel poiModel;
- (id)poiModel;
- (void)setPoiModel:;
- (id)countryModel;
- (void)setCountryModel:;
- (id)cityModel;
- (void)setCityModel:;
- (id)districtModel;
- (void)setDistrictModel:;
- (id)subDivisionsModelArray;
- (void)setSubDivisionsModelArray:;
- (id)placeModel;
- (void)setPlaceModel:;
- (id)message;
- (void).cxx_destruct;
- (void)setMessage:;
+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;
@end
