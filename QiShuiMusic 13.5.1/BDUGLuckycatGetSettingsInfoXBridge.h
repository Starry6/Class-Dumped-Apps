@interface BDUGLuckycatGetSettingsInfoXBridge : BDXBridgeMethod
- (Class)paramModelClass;
- (void)callWithParamModel:completionHandler:;
- (Class)resultModelClass;
- (long long)authType;
- (unsigned long long)engineTypes;
- (id)methodName;
@end
