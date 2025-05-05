@interface BDXBridgeCustomShowModalMethodResultModel : BDXBridgeModel
@property (nonatomic) q action;
- (long long)action;
- (void)setAction:;
+ (id)actionJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
