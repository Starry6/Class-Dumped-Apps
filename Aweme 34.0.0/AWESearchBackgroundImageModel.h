@interface AWESearchBackgroundImageModel : AWEBaseApiModel
@property (nonatomic) q lightTitleThemeStyle;
@property (nonatomic) AWEURLModel darkImage;
@property (nonatomic) AWEURLModel lightImage;
@property (nonatomic) double offset;
@property (nonatomic) double screenWidth;
- (id)lightImage;
- (void)setLightImage:;
- (void)setLightTitleThemeStyle:;
- (long long)lightTitleThemeStyle;
- (void)setOffset:;
- (double)offset;
- (void)setScreenWidth:;
- (double)screenWidth;
- (void).cxx_destruct;
- (void)setDarkImage:;
- (id)darkImage;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)darkImageJSONTransformer;
+ (id)lightImageJSONTransformer;
@end
