@interface AWECodeGenMaterialGetWeatherDataModel : AWEBaseDataModel
@property (nonatomic) NSDictionary location;
@property (nonatomic) AWECodeGenMaterialGetWeatherNowModel nowModel;
@property (nonatomic) NSArray forecastsArray;
- (id)nowModel;
- (void)setNowModel:;
- (id)forecastsArray;
- (void)setForecastsArray:;
- (id)location;
- (void)setLocation:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
