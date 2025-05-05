@interface SAWeatherForecast : AceObject
@property (nonatomic) NSNumber chanceOfPrecipitation;
@property (nonatomic) SAWeatherCondition condition;
@property (nonatomic) NSNumber isUserRequested;
@property (nonatomic) NSNumber timeIndex;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)condition;
- (void)setCondition:;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)chanceOfPrecipitation;
- (void)setChanceOfPrecipitation:;
- (id)isUserRequested;
- (void)setIsUserRequested:;
- (id)timeIndex;
- (void)setTimeIndex:;
+ (id)forecast;
+ (id)forecastWithDictionary:context:;
@end
