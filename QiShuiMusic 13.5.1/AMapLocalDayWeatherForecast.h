@interface AMapLocalDayWeatherForecast : AMapSearchObject
@property (nonatomic) NSString date;
@property (nonatomic) NSString week;
@property (nonatomic) NSString dayWeather;
@property (nonatomic) NSString nightWeather;
@property (nonatomic) NSString dayTemp;
@property (nonatomic) NSString nightTemp;
@property (nonatomic) NSString dayWind;
@property (nonatomic) NSString nightWind;
@property (nonatomic) NSString dayPower;
@property (nonatomic) NSString nightPower;
- (id)dayWind;
- (id)dayTemp;
- (id)dayPower;
- (id)dayWeather;
- (id)nightPower;
- (id)nightTemp;
- (id)nightWeather;
- (id)nightWind;
- (void)setDayPower:;
- (void)setDayTemp:;
- (void)setDayWeather:;
- (void)setDayWind:;
- (void)setNightPower:;
- (void)setNightTemp:;
- (void)setNightWeather:;
- (void)setNightWind:;
- (id)init;
- (id)date;
- (void).cxx_destruct;
- (void)setDate:;
- (id)week;
- (void)setWeek:;
+ (id)ajo_mapping;
@end
