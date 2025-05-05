@interface IESECListKitXBridgeEcGetCachedApiResponseMethodParamModel : BDXBridgeModel
@property (nonatomic) NSString apiKey;
@property (nonatomic) NSString majorKey;
@property (nonatomic) NSString subKey;
@property (nonatomic) NSString subSubKey;
- (id)majorKey;
- (void)setMajorKey:;
- (void)setSubKey:;
- (void)setSubSubKey:;
- (id)subKey;
- (id)subSubKey;
- (void).cxx_destruct;
- (void)setApiKey:;
- (id)apiKey;
+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;
@end
