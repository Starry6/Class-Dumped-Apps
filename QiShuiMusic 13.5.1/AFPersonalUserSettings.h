@interface AFPersonalUserSettings : NSObject
@property (nonatomic) NSString temperatureUnit;
@property (nonatomic) BOOL twentyFourHourTimeDisplay;
@property (nonatomic) NSString region;
@property (nonatomic) NSString countryCode;
@property (nonatomic) NSString preferredLanguage;
- (void)setCountryCode:;
- (id)countryCode;
- (BOOL)twentyFourHourTimeDisplay;
- (void)setPreferredLanguage:;
- (void)setRegion:;
- (id)region;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)temperatureUnit;
- (void)setTwentyFourHourTimeDisplay:;
- (id)preferredLanguage;
- (void)setTemperatureUnit:;
+ (BOOL)supportsSecureCoding;
@end
