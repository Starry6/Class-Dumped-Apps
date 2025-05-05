@interface BDXBridgeRequestPermissionMethodParamModel : BDXBridgeModel
@property (nonatomic) Q permission;
@property (nonatomic) BOOL showAlert;
- (void)setShowAlert:;
- (unsigned long long)permission;
- (void)setPermission:;
- (BOOL)showAlert;
+ (id)permissionJSONTransformer;
+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;
@end
