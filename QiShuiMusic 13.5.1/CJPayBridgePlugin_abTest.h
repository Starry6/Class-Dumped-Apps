@interface CJPayBridgePlugin_abTest : TTBridgePlugin
- (void)abTestWithParam:callback:engine:controller:;
+ (void)registerBridge;
+ (unsigned long long)instanceType;
@end
