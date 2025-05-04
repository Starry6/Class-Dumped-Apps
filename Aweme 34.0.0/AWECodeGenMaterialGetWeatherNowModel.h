@interface AWECodeGenMaterialGetWeatherNowModel : AWEBaseDataModel
@property (nonatomic) NSString text;
@property (nonatomic) NSInteger temp;
@property (nonatomic) NSInteger feelsLike;
@property (nonatomic) NSInteger rh;
@property (nonatomic) NSString windClass;
@property (nonatomic) NSString windDir;
@property (nonatomic) NSString uptime;
- (id)uptime;
- (void)setTemp:;
- (int)rh;
- (void)setRh:;
- (id)windClass;
- (void)setWindClass:;
- (id)windDir;
- (void)setWindDir:;
- (void)setUptime:;
- (void)setText:;
- (id)text;
- (void).cxx_destruct;
- (int)temp;
- (int)feelsLike;
- (void)setFeelsLike:;
+ (id)JSONKeyPathsByPropertyKey;
@end
