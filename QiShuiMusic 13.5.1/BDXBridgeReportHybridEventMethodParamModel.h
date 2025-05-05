@interface BDXBridgeReportHybridEventMethodParamModel : BDXBridgeModel
@property (nonatomic) NSString eventName;
@property (nonatomic) BDXBridgeReportHybridEventParams params;
- (id)eventName;
- (void)setEventName:;
- (void).cxx_destruct;
- (id)params;
- (void)setParams:;
+ (id)paramsJSONTransformer;
+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;
@end
