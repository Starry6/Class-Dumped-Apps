@interface AWEProfileUpdateUrgeModel : AWEBaseApiModel
@property (nonatomic) AWEProfileUrgeControlModel controlModel;
- (id)controlModel;
- (void)setControlModel:;
- (void).cxx_destruct;
+ (id)controlModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
