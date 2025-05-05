@interface BDXBridgeGetSettingsMethod : BDXBridgeMethod
- (Class)paramModelClass;
- (void)callWithParamModel:completionHandler:;
- (BOOL)implementationCheckWithService:inBiz:;
- (Class)resultModelClass;
- (id)settingForKeyPath:withService:inBiz:type:;
- (Class)classForType:;
- (id)methodName;
+ (id)metaInfo;
@end
