@interface BDXBridgeGetMethodListMethod : BDXBridgeMethod
- (void)callWithParamModel:completionHandler:;
- (BOOL)isDevelopmentMethod;
- (Class)resultModelClass;
- (id)stringifyAuthType:;
- (id)methodName;
+ (id)metaInfo;
@end
