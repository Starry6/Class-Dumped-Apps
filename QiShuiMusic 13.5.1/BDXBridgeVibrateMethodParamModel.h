@interface BDXBridgeVibrateMethodParamModel : BDXBridgeModel
@property (nonatomic) NSNumber duration;
@property (nonatomic) q style;
- (void)setStyle:;
- (void)setDuration:;
- (void).cxx_destruct;
- (long long)style;
- (id)duration;
+ (id)requiredKeyPaths;
+ (id)styleJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
