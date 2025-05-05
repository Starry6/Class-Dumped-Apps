@interface SAWeatherAirQualitySnippet : SAUISnippet
@property (nonatomic) NSArray aceAirQualities;
@property (nonatomic) SAUIAppPunchOut appPunchOut;
@property (nonatomic) SAUIImageResource attributionImage;
- (id)groupIdentifier;
- (id)encodedClassName;
- (void)setAttributionImage:;
- (id)attributionImage;
- (id)appPunchOut;
- (void)setAppPunchOut:;
- (id)aceAirQualities;
- (void)setAceAirQualities:;
+ (id)airQualitySnippet;
+ (id)airQualitySnippetWithDictionary:context:;
@end
