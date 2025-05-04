@interface AWEPrivateInfoResponseModel : AWEBaseApiModel
@property (nonatomic) AWEURLModel labelPrivate;
@property (nonatomic) NSArray tagLabels;
@property (nonatomic) NSArray hybridLabels;
- (id)labelPrivate;
- (void)setLabelPrivate:;
- (id)tagLabels;
- (void)setTagLabels:;
- (id)hybridLabels;
- (void)setHybridLabels:;
- (void).cxx_destruct;
+ (id)tagLabelsJSONTransformer;
+ (id)hybridLabelsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
