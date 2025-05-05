@interface SAWeatherUnits : AceObject
@property (nonatomic) NSString distanceUnits;
@property (nonatomic) NSString precipitationUnits;
@property (nonatomic) NSString pressureUnits;
@property (nonatomic) NSString speedUnits;
@property (nonatomic) NSString temperatureUnits;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (id)distanceUnits;
- (void)setDistanceUnits:;
- (id)encodedClassName;
- (id)precipitationUnits;
- (void)setPrecipitationUnits:;
- (id)pressureUnits;
- (void)setPressureUnits:;
- (id)speedUnits;
- (void)setSpeedUnits:;
- (id)temperatureUnits;
- (void)setTemperatureUnits:;
+ (id)units;
+ (id)unitsWithDictionary:context:;
@end
