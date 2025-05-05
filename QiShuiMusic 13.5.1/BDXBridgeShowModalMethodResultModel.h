@interface BDXBridgeShowModalMethodResultModel : BDXBridgeModel
@property (nonatomic) Q action;
- (unsigned long long)action;
- (void)setAction:;
+ (id)actionJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
