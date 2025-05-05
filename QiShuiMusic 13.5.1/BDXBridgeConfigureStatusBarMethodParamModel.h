@interface BDXBridgeConfigureStatusBarMethodParamModel : BDXBridgeModel
@property (nonatomic) BOOL visible;
@property (nonatomic) NSString backgroundColor;
@property (nonatomic) q style;
- (BOOL)visible;
- (void)setVisible:;
- (void)setBackgroundColor:;
- (id)backgroundColor;
- (void)setStyle:;
- (void).cxx_destruct;
- (long long)style;
+ (id)requiredKeyPaths;
+ (id)styleJSONTransformer;
+ (id)defaultValues;
+ (id)JSONKeyPathsByPropertyKey;
@end
