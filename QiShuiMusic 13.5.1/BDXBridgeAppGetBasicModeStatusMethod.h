@interface BDXBridgeAppGetBasicModeStatusMethod : BDXBridgeMethod
- (void)callWithParamModel:completionHandler:;
- (Class)resultModelClass;
- (long long)authType;
- (id)methodName;
+ (id)metaInfo;
@end
