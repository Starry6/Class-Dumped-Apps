@interface BDUPCXBridgeAppSendLogV3MethodParamModel : BDXBridgeModel
@property (nonatomic) NSString event;
@property (nonatomic) NSDictionary params;
- (void)setEvent:;
- (id)event;
- (void).cxx_destruct;
- (id)params;
- (void)setParams:;
+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;
@end
