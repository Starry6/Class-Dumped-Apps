@interface AWEXTabReloadBridgeMethod : DHBaseBridgeMethod
- (Class)paramModelClass;
- (void)onRunloopIdle:;
- (void)callWithParamModel:completionHandlerWithTracker:;
- (long long)authType;
- (id)methodName;
@end
