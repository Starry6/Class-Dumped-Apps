@interface BDXBridgeAppCollectMethodParamModel : BDXBridgeModel
@property (nonatomic) NSString id;
@property (nonatomic) NSString et_params;
@property (nonatomic) q action;
@property (nonatomic) q type;
- (id)et_params;
- (void)setEt_params:;
- (id)id;
- (void)setType:;
- (long long)action;
- (void)setAction:;
- (long long)type;
- (void).cxx_destruct;
- (void)setId:;
+ (id)requiredKeyPaths;
+ (id)typeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
