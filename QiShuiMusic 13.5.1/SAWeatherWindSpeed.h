@interface SAWeatherWindSpeed : AceObject
@property (nonatomic) NSString value;
@property (nonatomic) NSString windDirection;
@property (nonatomic) NSNumber windDirectionDegree;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (void)setValue:;
- (id)encodedClassName;
- (id)value;
- (id)windDirection;
- (void)setWindDirection:;
- (id)windDirectionDegree;
- (void)setWindDirectionDegree:;
+ (id)windSpeed;
+ (id)windSpeedWithDictionary:context:;
@end
