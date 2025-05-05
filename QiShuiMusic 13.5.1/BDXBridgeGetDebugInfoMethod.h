@interface BDXBridgeGetDebugInfoMethod : BDXBridgeMethod
- (void)callWithParamModel:completionHandler:;
- (BOOL)isDevelopmentMethod;
- (Class)resultModelClass;
- (id)methodName;
+ (id)metaInfo;
@end
