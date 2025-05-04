@interface AWEXBridgeEcEccsCardCallActionMethod : BDXBridgeMethod
- (Class)paramModelClass;
- (void)callWithParamModel:completionHandler:;
- (id)alertActionWithDict:;
- (long long)authType;
- (id)methodName;
+ (id)metaInfo;
@end
