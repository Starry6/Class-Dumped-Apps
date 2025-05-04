@interface AWELeftSideBarWeatherModel : MTLModel
@property (nonatomic) NSNumber temperature;
@property (nonatomic) NSString weather;
@property (nonatomic) NSString city;
@property (nonatomic) NSString keyword;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setEnterFrom:;
- (id)enterFrom;
- (id)temperature;
- (id)city;
- (void)setTemperature:;
- (void).cxx_destruct;
- (void)setCity:;
- (id)keyword;
- (void)setKeyword:;
- (id)weather;
- (void)setWeather:;
+ (id)JSONKeyPathsByPropertyKey;
@end
