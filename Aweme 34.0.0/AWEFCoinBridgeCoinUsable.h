@interface AWEFCoinBridgeCoinUsable : DHBaseBridgeMethod
- (Class)paramModelClass;
- (Class)resultModelClass;
- (void)callWithParamModel:completionHandlerWithTracker:;
- (long long)authType;
- (id)methodName;
@end
