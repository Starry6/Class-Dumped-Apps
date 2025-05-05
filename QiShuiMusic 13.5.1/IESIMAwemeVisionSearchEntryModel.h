@interface IESIMAwemeVisionSearchEntryModel : IESIMBaseApiModel
@property (nonatomic) IESIMURLModel iconURL;
@property (nonatomic) NSString title;
@property (nonatomic) NSString subTitle;
@property (nonatomic) NSString textColor;
- (void)setIconURL:;
- (void)setTitle:;
- (id)title;
- (void)setTextColor:;
- (void).cxx_destruct;
- (id)textColor;
- (void)setSubTitle:;
- (id)iconURL;
- (id)subTitle;
+ (id)iconURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
