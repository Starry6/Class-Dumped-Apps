@interface AWESearchBackgroundColorModel : AWEBaseApiModel
@property (nonatomic) UIColor darkColor;
@property (nonatomic) UIColor lightColor;
@property (nonatomic) double gradientHeight;
@property (nonatomic) double offset;
@property (nonatomic) double screenWidth;
- (void)setOffset:;
- (double)offset;
- (void)setScreenWidth:;
- (id)lightColor;
- (double)screenWidth;
- (void).cxx_destruct;
- (id)darkColor;
- (void)setDarkColor:;
- (void)setLightColor:;
- (double)gradientHeight;
- (void)setGradientHeight:;
+ (id)colorWithARGBHexString:;
+ (id)darkColorJSONTransformer;
+ (id)lightColorJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
