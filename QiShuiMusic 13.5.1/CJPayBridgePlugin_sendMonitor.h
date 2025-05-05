@interface CJPayBridgePlugin_sendMonitor : TTBridgePlugin
- (void)sendMonitorWithParam:callback:engine:controller:;
+ (void)registerBridge;
+ (unsigned long long)instanceType;
@end
