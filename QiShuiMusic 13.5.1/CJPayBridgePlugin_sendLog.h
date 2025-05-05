@interface CJPayBridgePlugin_sendLog : TTBridgePlugin
- (void)sendLogWithParam:callback:engine:controller:;
+ (void)registerBridge;
+ (unsigned long long)instanceType;
@end
