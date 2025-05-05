@interface CJPayBridgePlugin_authAlipay : TTBridgePlugin
- (void)authAlipayWithParam:callback:engine:controller:;
+ (void)registerBridge;
+ (unsigned long long)instanceType;
@end
