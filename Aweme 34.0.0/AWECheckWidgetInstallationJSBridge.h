@interface AWECheckWidgetInstallationJSBridge : DHBaseBridgeMethod
- (Class)paramModelClass;
- (void)callWithParamModel:completionHandler:;
- (Class)resultModelClass;
- (long long)authType;
- (id)methodName;
@end
