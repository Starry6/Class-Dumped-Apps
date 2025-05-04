@interface AWEAdPlayableMultifunctionParamModel : BDXBridgeModel
@property (nonatomic) NSString name;
@property (nonatomic) NSDictionary params;
- (void).cxx_destruct;
- (void)setName:;
- (id)name;
- (id)params;
- (void)setParams:;
+ (id)JSONKeyPathsByPropertyKey;
@end
