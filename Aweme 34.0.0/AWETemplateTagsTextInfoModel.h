@interface AWETemplateTagsTextInfoModel : AWEBaseApiModel
@property (nonatomic) NSString content;
@property (nonatomic) AWETemplateTagsTextInfoStyleModel style;
- (id)content;
- (id)style;
- (void)setContent:;
- (void).cxx_destruct;
- (void)setStyle:;
+ (id)styleJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
