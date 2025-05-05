@interface BDASifXBridgeOpenLinkMethod : BDXBridgeMethod
- (Class)paramModelClass;
- (void)callWithParamModel:completionHandler:;
- (long long)authType;
- (id)methodName;
+ (id)metaInfo;
+ (id)methodName;
@end
