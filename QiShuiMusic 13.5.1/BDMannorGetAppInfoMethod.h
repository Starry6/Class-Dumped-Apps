@interface BDMannorGetAppInfoMethod : BDXBridgeMethod
- (void)callWithParamModel:completionHandler:;
- (Class)resultModelClass;
- (long long)authType;
- (id)methodName;
@end
