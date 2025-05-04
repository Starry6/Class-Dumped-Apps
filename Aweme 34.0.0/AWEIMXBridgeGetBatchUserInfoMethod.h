@interface AWEIMXBridgeGetBatchUserInfoMethod : BDXBridgeMethod
- (Class)paramModelClass;
- (void)callWithParamModel:completionHandler:;
- (Class)resultModelClass;
- (id)transInfoModelWithUser:;
- (long long)authType;
- (id)methodName;
+ (id)metaInfo;
@end
