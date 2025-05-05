@interface BDXBridgeCheckAppsInfoMethod : BDXBridgeMethod
- (Class)paramModelClass;
- (void)callWithParamModel:completionHandler:;
- (BOOL)isInstalledAppSchema:;
- (Class)resultModelClass;
- (long long)authType;
- (id)methodName;
+ (id)metaInfo;
@end
