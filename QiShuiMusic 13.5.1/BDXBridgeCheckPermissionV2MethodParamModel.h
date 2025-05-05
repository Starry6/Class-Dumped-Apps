@interface BDXBridgeCheckPermissionV2MethodParamModel : BDXBridgeModel
@property (nonatomic) Q permission;
- (unsigned long long)permission;
- (void)setPermission:;
+ (id)permissionJSONTransformer;
+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;
@end
