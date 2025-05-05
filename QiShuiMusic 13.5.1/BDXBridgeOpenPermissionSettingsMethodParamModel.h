@interface BDXBridgeOpenPermissionSettingsMethodParamModel : BDXBridgeModel
@property (nonatomic) NSNumber useVersion2;
@property (nonatomic) q permission;
- (void)setUseVersion2:;
- (id)useVersion2;
- (long long)permission;
- (void)setPermission:;
- (void).cxx_destruct;
+ (id)permissionJSONTransformer;
+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;
@end
