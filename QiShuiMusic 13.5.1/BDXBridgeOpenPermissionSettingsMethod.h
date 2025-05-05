@interface BDXBridgeOpenPermissionSettingsMethod : BDXBridgeMethod
- (Class)paramModelClass;
- (void)callWithParamModel:completionHandler:;
- (void)openSettingsAndCheckPermission:completionHandler:;
- (Class)resultModelClass;
- (long long)authType;
- (id)methodName;
+ (id)metaInfo;
@end
