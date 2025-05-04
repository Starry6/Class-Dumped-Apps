@interface AWEInteractModularizationTextModel : IESIMBaseApiModel
@property (nonatomic) NSString text;
@property (nonatomic) NSArray params;
- (void)setText:;
- (id)text;
- (void).cxx_destruct;
- (id)params;
- (void)setParams:;
+ (id)paramsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
