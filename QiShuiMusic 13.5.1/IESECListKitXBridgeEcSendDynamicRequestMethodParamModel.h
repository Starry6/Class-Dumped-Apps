@interface IESECListKitXBridgeEcSendDynamicRequestMethodParamModel : BDXBridgeModel
@property (nonatomic) NSString apiKey;
@property (nonatomic) NSDictionary headers;
@property (nonatomic) NSDictionary params;
- (void)setHeaders:;
- (void).cxx_destruct;
- (id)headers;
- (id)params;
- (void)setParams:;
- (void)setApiKey:;
- (id)apiKey;
+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;
@end
