@interface CJPayBridgePlugin_pay : TTBridgePlugin
- (void)payWithParam:callback:engine:controller:;
+ (void)registerBridge;
+ (unsigned long long)instanceType;
@end
