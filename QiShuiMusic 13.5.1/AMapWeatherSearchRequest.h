@interface AMapWeatherSearchRequest : AMapSearchObject
@property (nonatomic) NSString city;
@property (nonatomic) q type;
- (id)city;
- (id)init;
- (void)setType:;
- (long long)type;
- (void).cxx_destruct;
- (void)setCity:;
+ (id)ajo_mapping;
@end
