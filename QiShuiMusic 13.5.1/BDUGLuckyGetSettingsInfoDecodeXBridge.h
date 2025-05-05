@interface BDUGLuckyGetSettingsInfoDecodeXBridge : BDUGLuckyXBridgeMethod
- (Class)paramModelClass;
- (id)__constructSettingsDictWithSettingsType:settingsKeys:;
- (void)callWithParamModel:completionHandler:;
- (Class)resultModelClass;
- (id)methodName;
@end
