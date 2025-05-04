@interface AWESearchHomeWeatherDataModel : AWEBaseApiModel
@property (nonatomic) NSString city;
@property (nonatomic) q cityCode;
@property (nonatomic) NSNumber temp;
@property (nonatomic) NSString weatherDes;
- (void)setTemp:;
- (id)weatherDes;
- (void)setWeatherDes:;
- (id)city;
- (void).cxx_destruct;
- (void)setCity:;
- (long long)cityCode;
- (void)setCityCode:;
- (id)temp;
+ (id)JSONKeyPathsByPropertyKey;
@end
