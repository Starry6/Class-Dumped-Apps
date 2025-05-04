@interface AWEVideoLabel : AWEBaseApiModel
@property (nonatomic) q labelType;
@property (nonatomic) AWEURLModel labelUrl;
- (id)labelUrl;
- (void)setLabelUrl:;
- (long long)labelType;
- (void)setLabelType:;
- (void).cxx_destruct;
+ (id)labelUrlJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
