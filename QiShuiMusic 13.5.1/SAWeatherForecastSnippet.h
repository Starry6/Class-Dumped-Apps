@interface SAWeatherForecastSnippet : SAUISnippet
@property (nonatomic) NSArray aceWeathers;
@property (nonatomic) SAUIAppPunchOut appPunchOut;
@property (nonatomic) SAUIImageResource attributionImage;
- (id)groupIdentifier;
- (id)encodedClassName;
- (void)setAttributionImage:;
- (id)attributionImage;
- (id)appPunchOut;
- (void)setAppPunchOut:;
- (id)aceWeathers;
- (void)setAceWeathers:;
+ (id)forecastSnippet;
+ (id)forecastSnippetWithDictionary:context:;
@end
