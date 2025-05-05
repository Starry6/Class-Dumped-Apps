@interface IESIMVideoLabel : IESIMBaseApiModel
@property (nonatomic) q labelType;
@property (nonatomic) IESIMURLModel labelUrl;
- (id)labelUrl;
- (void)setLabelUrl:;
- (void)setLabelType:;
- (long long)labelType;
- (void).cxx_destruct;
+ (id)labelUrlJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
