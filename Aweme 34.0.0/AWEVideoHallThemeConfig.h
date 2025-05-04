@interface AWEVideoHallThemeConfig : MTLModel
@property (nonatomic) AWEVideoHallThemeMod darkModeImage;
@property (nonatomic) AWEVideoHallThemeMod lightModeImage;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setDarkModeImage:;
- (void)setLightModeImage:;
- (id)lightModeImage;
- (id)darkModeImage;
- (void).cxx_destruct;
+ (id)darkModeImageJSONTransformer;
+ (id)lightModeImageJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
