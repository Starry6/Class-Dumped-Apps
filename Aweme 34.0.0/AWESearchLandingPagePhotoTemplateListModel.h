@interface AWESearchLandingPagePhotoTemplateListModel : AWEBaseApiModel
@property (nonatomic) NSString title;
@property (nonatomic) NSMutableArray props;
- (id)props;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (void)setProps:;
+ (id)propsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
