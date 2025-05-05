@interface BDXBridgeChooseMediaMethod : BDXBridgeMethod
- (Class)paramModelClass;
- (void)callWithParamModel:completionHandler:;
- (void)chooseMediaWithParams:completionHandler:;
- (id)defaultMediaPicker;
- (Class)resultModelClass;
- (long long)authType;
- (id)methodName;
+ (id)requiredKeyPaths;
@end
