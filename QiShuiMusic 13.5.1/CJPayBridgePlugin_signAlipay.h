@interface CJPayBridgePlugin_signAlipay : TTBridgePlugin
- (void)signAlipayWithParam:callback:engine:controller:;
+ (void)registerBridge;
+ (unsigned long long)instanceType;
@end
