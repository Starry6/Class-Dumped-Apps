@interface BDMannorLaunchWXMiniProMethod : BDXBridgeMethod
- (Class)paramModelClass;
- (long long)authType;
- (id)methodName;
+ (void)launchWXMiniProWithParamModel:adData:logExtra:completionHandler:;
@end
