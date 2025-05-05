@interface BDMannorAdInfoMethod : BDXBridgeMethod
- (id)adInfo;
- (void)callWithParamModel:completionHandler:;
- (Class)resultModelClass;
- (long long)authType;
- (id)methodName;
@end
