@interface SAClockObject : SADomainObject
@property (nonatomic) NSNumber alCityId;
@property (nonatomic) NSString cityName;
@property (nonatomic) NSString countryCode;
@property (nonatomic) NSString countryName;
@property (nonatomic) NSString timezoneId;
@property (nonatomic) NSString unlocalizedCityName;
@property (nonatomic) NSString unlocalizedCountryName;
- (void)setCountryCode:;
- (id)countryCode;
- (id)countryName;
- (void)setUnlocalizedCountryName:;
- (id)groupIdentifier;
- (void)setCountryName:;
- (id)unlocalizedCountryName;
- (id)unlocalizedCityName;
- (id)encodedClassName;
- (id)alCityId;
- (id)cityName;
- (id)timezoneId;
- (void)setTimezoneId:;
- (void)setAlCityId:;
- (void)setCityName:;
- (void)setUnlocalizedCityName:;
+ (id)object;
+ (id)objectWithDictionary:context:;
@end
