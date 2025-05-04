@interface AWEXBridgeShowInnerPushMethod : BDXBridgeMethod
- (Class)paramModelClass;
- (void)callWithParamModel:completionHandler:;
- (long long)authType;
- (id)methodName;
+ (id)metaInfo;
@end
