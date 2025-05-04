@interface AWESearchMusicHeaderItemModel : AWEBaseApiModel
@property (nonatomic) NSString title;
@property (nonatomic) BOOL isSelected;
@property (nonatomic) AWEURLModel iconLightUrl;
@property (nonatomic) AWEURLModel iconDarkUrl;
- (id)iconLightUrl;
- (void)setIconLightUrl:;
- (void)setIconDarkUrl:;
- (id)iconDarkUrl;
- (void)setIsSelected:;
- (BOOL)isSelected;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
+ (id)iconLightUrlJSONTransformer;
+ (id)iconDarkUrlJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)isSelectedJSONTransformer;
@end
