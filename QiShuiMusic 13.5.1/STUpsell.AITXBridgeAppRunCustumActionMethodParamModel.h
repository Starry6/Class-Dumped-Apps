@interface STUpsell.AITXBridgeAppRunCustumActionMethodParamModel : BDXBridgeModel
@property (nonatomic) NSString actionName;
@property (nonatomic) NSDictionary actionParam;
- (void)setActionParam:;
- (id)actionParam;
- (id)init;
- (id)initWithDictionary:error:;
- (id)initWithCoder:;
- (void)setActionName:;
- (void).cxx_destruct;
- (id)actionName;
+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;
@end
