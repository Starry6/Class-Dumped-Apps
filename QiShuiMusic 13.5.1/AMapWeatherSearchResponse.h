@interface AMapWeatherSearchResponse : AMapSearchObject
@property (nonatomic) NSArray lives;
@property (nonatomic) NSArray forecasts;
- (id)lives;
- (void)setLives:;
- (void)setForecasts:;
- (id)forecasts;
- (void).cxx_destruct;
+ (id)ajo_arrayClassMapping;
+ (id)ajo_mapping;
@end
