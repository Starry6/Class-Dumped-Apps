@interface AWEMayDayBridgeDirectMessage : BDXBridgeMethod
- (Class)paramModelClass;
- (void)callWithParamModel:completionHandler:;
- (Class)resultModelClass;
- (void)realHandleParamModel:completionHandler:;
- (long long)authType;
- (id)methodName;
@end
