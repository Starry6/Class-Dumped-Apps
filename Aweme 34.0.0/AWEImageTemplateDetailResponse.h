@interface AWEImageTemplateDetailResponse : AWEBaseApiModel
@property (nonatomic) AWEImageTemplateDetailModel templateDetail;
- (id)templateDetail;
- (void)setTemplateDetail:;
- (void).cxx_destruct;
+ (id)templateDetailJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
