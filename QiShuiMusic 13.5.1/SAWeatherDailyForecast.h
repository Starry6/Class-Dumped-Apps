@interface SAWeatherDailyForecast : SAWeatherForecast
@property (nonatomic) NSNumber highTemperature;
@property (nonatomic) NSNumber lowTemperature;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)highTemperature;
- (void)setHighTemperature:;
- (id)lowTemperature;
- (void)setLowTemperature:;
+ (id)dailyForecast;
+ (id)dailyForecastWithDictionary:context:;
@end
