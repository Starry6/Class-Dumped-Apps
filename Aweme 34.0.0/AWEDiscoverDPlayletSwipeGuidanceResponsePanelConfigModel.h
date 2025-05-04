@interface AWEDiscoverDPlayletSwipeGuidanceResponsePanelConfigModel : AWEBaseApiModel
@property (nonatomic) AWEDiscoverDPlayletSwipeGuidanceResponseImageModel coverImage;
@property (nonatomic) AWEDiscoverDPlayletSwipeGuidanceResponseImageModel backgroundImage;
@property (nonatomic) NSString subTitle;
@property (nonatomic) NSString mainTitle;
@property (nonatomic) NSArray buttons;
- (void)setCoverImage:;
- (id)backgroundImage;
- (void)setBackgroundImage:;
- (void)setButtons:;
- (void)setSubTitle:;
- (id)buttons;
- (id)subTitle;
- (void).cxx_destruct;
- (id)mainTitle;
- (void)setMainTitle:;
- (id)coverImage;
+ (id)buttonsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)backgroundImageJSONTransformer;
+ (id)coverImageJSONTransformer;
@end
