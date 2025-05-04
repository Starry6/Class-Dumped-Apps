@interface AWETemplateTagsImageInfoModel : AWEBaseApiModel
@property (nonatomic) AWEURLModel image;
@property (nonatomic) AWETemplateTagsImageStyleModel style;
- (id)image;
- (void)setImage:;
- (id)style;
- (void).cxx_destruct;
- (void)setStyle:;
+ (id)imageJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
