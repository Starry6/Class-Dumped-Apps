@interface IESIMPrivateInfoResponseModel : IESIMBaseApiModel
@property (nonatomic) IESIMURLModel labelPrivate;
@property (nonatomic) NSArray tagLabels;
@property (nonatomic) NSArray hybridLabels;
- (id)hybridLabels;
- (id)labelPrivate;
- (void)setHybridLabels:;
- (void)setLabelPrivate:;
- (void)setTagLabels:;
- (id)tagLabels;
- (void).cxx_destruct;
+ (id)hybridLabelsJSONTransformer;
+ (id)tagLabelsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
