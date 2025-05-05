@interface AMapLocalWeatherForecast : AMapSearchObject
@property (nonatomic) NSString adcode;
@property (nonatomic) NSString province;
@property (nonatomic) NSString city;
@property (nonatomic) NSString reportTime;
@property (nonatomic) NSArray casts;
- (id)adcode;
- (id)casts;
- (id)province;
- (void)setAdcode:;
- (void)setCasts:;
- (void)setProvince:;
- (id)city;
- (id)init;
- (void).cxx_destruct;
- (void)setCity:;
- (id)reportTime;
- (void)setReportTime:;
+ (id)ajo_arrayClassMapping;
+ (id)ajo_mapping;
@end
