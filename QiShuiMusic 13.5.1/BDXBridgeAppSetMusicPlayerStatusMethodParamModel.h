@interface BDXBridgeAppSetMusicPlayerStatusMethodParamModel : BDXBridgeModel
@property (nonatomic) q status;
- (void)setStatus:;
- (long long)status;
+ (id)requiredKeyPaths;
+ (id)statusJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
