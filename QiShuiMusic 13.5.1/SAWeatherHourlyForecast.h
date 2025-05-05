@interface SAWeatherHourlyForecast : SAWeatherForecast
@property (nonatomic) NSNumber temperature;
- (id)groupIdentifier;
- (void)setTemperature:;
- (id)encodedClassName;
- (id)temperature;
+ (id)hourlyForecast;
+ (id)hourlyForecastWithDictionary:context:;
@end
