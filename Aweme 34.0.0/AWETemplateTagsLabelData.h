@interface AWETemplateTagsLabelData : AWEBaseApiModel
@property (nonatomic) NSString dataRef;
@property (nonatomic) AWETemplateTagsLabelDetailData detailData;
- (void)setDataRef:;
- (id)detailData;
- (void)setDetailData:;
- (void).cxx_destruct;
- (id)dataRef;
+ (id)detailDataJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
