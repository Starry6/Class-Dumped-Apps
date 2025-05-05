@interface BDXBridgeAppSendHybridMetricsMethodParamModel : BDXBridgeModel
@property (nonatomic) NSNumber now;
@property (nonatomic) BDXBridgeAppSendHybridMetricsParams params;
- (id)now;
- (void)setNow:;
- (void).cxx_destruct;
- (id)params;
- (void)setParams:;
+ (id)paramsJSONTransformer;
+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;
@end
