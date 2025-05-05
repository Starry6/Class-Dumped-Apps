@interface CJPayBridgePlugin_sendPageStatus : TTBridgePlugin
- (void)sendPageStatusWithParam:callback:engine:controller:;
+ (void)registerBridge;
+ (unsigned long long)instanceType;
@end
