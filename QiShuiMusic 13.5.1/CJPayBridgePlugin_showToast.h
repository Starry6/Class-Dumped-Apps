@interface CJPayBridgePlugin_showToast : TTBridgePlugin
- (void)showToastWithParam:callback:engine:controller:;
+ (void)registerBridge;
+ (unsigned long long)instanceType;
@end
