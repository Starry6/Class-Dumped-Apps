@interface BDXBridgeLoginMethodParamModel : BDXBridgeModel
@property (nonatomic) NSDictionary context;
@property (nonatomic) BOOL keepOpen;
- (void)setKeepOpen:;
- (id)context;
- (BOOL)keepOpen;
- (void).cxx_destruct;
- (void)setContext:;
+ (id)defaultValues;
+ (id)JSONKeyPathsByPropertyKey;
@end
