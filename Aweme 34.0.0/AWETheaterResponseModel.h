@interface AWETheaterResponseModel : AWEBaseApiModel
@property (nonatomic) NSString theaterTitle;
@property (nonatomic) NSArray sectionList;
@property (nonatomic) AWETheaterThemeConfig themeConfig;
@property (nonatomic) AWETheaterNoviceGuideConfig noviceGuideConfig;
@property (nonatomic) AWECodeGenTheaterGuideBarConfigModel guideBarConfig;
- (id)themeConfig;
- (void)setThemeConfig:;
- (id)theaterTitle;
- (id)guideBarConfig;
- (void)setGuideBarConfig:;
- (void)setTheaterTitle:;
- (id)noviceGuideConfig;
- (void)setNoviceGuideConfig:;
- (void).cxx_destruct;
- (void)setSectionList:;
- (id)sectionList;
+ (id)sectionListJSONTransformer;
+ (id)themeConfigJSONTransformer;
+ (id)noviceGuideConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
