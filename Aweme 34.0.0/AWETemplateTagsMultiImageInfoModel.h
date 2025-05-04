@interface AWETemplateTagsMultiImageInfoModel : AWEBaseApiModel
@property (nonatomic) NSArray images;
@property (nonatomic) AWETemplateTagsMultiImageStyleModel style;
- (id)images;
- (id)style;
- (void)setImages:;
- (void).cxx_destruct;
- (void)setStyle:;
+ (id)styleJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)imagesJSONTransformer;
@end
