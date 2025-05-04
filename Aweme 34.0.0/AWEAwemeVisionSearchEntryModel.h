@interface AWEAwemeVisionSearchEntryModel : AWEBaseApiModel
@property (nonatomic) AWEURLModel iconURL;
@property (nonatomic) NSString title;
@property (nonatomic) NSString subTitle;
@property (nonatomic) NSString textColor;
- (void)setIconURL:;
- (id)iconURL;
- (void)setSubTitle:;
- (void)setTextColor:;
- (id)subTitle;
- (void).cxx_destruct;
- (id)title;
- (id)textColor;
- (void)setTitle:;
+ (id)iconURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
