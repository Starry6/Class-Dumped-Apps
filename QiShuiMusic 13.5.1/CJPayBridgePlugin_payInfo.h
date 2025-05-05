@interface CJPayBridgePlugin_payInfo : TTBridgePlugin
- (void)payInfoWithParam:callback:engine:controller:;
+ (void)registerBridge;
+ (unsigned long long)instanceType;
@end
