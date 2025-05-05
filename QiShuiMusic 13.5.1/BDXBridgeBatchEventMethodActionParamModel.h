@interface BDXBridgeBatchEventMethodActionParamModel : BDXBridgeModel
@property (nonatomic) NSString methodName;
@property (nonatomic) NSDictionary params;
- (void).cxx_destruct;
- (id)params;
- (void)setParams:;
- (id)methodName;
- (void)setMethodName:;
+ (id)JSONKeyPathsByPropertyKey;
@end
