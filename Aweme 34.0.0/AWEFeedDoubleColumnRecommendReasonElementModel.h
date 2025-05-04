@interface AWEFeedDoubleColumnRecommendReasonElementModel : AWEBaseApiModel
@property (nonatomic) AWEFeedDoubleColumnRecommendReasonTextModel text;
@property (nonatomic) AWEURLModel urlModel;
- (id)urlModel;
- (void)setUrlModel:;
- (void)setText:;
- (id)text;
- (void).cxx_destruct;
+ (id)urlModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)textJSONTransformer;
@end
