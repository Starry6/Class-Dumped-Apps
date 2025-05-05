@interface BDXBridgeAppShareV2MethodResultModel : BDXBridgeModel
@property (nonatomic) q status;
- (void)setStatus:;
- (long long)status;
+ (id)statusJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
