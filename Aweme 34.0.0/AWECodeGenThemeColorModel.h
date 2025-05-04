@interface AWECodeGenThemeColorModel : AWEBaseDataModel
@property (nonatomic) NSString darkColor;
@property (nonatomic) NSString lightColor;
- (id)lightColor;
- (void).cxx_destruct;
- (id)darkColor;
- (void)setDarkColor:;
- (void)setLightColor:;
+ (id)JSONKeyPathsByPropertyKey;
@end
