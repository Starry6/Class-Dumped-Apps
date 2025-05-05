@interface BDXBridgeH5MusicPlayStatusChangeMethodParamModel : BDXBridgeModel
@property (nonatomic) NSDictionary extra;
@property (nonatomic) q status;
- (void)setExtra:;
- (void)setStatus:;
- (id)extra;
- (void).cxx_destruct;
- (long long)status;
+ (id)requiredKeyPaths;
+ (id)statusJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
