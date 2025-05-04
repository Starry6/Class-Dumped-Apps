@interface AWETemplateTagsMultiTextInfoModel : AWEBaseApiModel
@property (nonatomic) NSArray textInfos;
@property (nonatomic) AWETemplateTagsMultiTextInfoStyleModel style;
- (id)textInfos;
- (void)setTextInfos:;
- (id)style;
- (void).cxx_destruct;
- (void)setStyle:;
+ (id)styleJSONTransformer;
+ (id)textInfosJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
