@interface BDUGLuckycatCheckFunctionSwitchXBridge : BDUGLuckyXBridgeMethod
- (Class)paramModelClass;
- (void)callWithParamModel:completionHandler:;
- (Class)resultModelClass;
- (id)methodName;
+ (id)checkFunctionSwitch:;
+ (BOOL)isWifiTurnOn;
@end
