@interface BDXBridgeGetAppInfoMethod : BDXBridgeMethod
- (void)callWithParamModel:completionHandler:;
- (Class)resultModelClass;
- (long long)authType;
- (id)methodName;
- (id)netType;
+ (id)metaInfo;
@end
