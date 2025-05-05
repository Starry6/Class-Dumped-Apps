@interface BDXBridgeReportAppLogMethodParamModel : BDXBridgeModel
@property (nonatomic) NSString eventName;
@property (nonatomic) NSDictionary params;
- (id)eventName;
- (void)setEventName:;
- (void).cxx_destruct;
- (id)params;
- (void)setParams:;
+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;
@end
