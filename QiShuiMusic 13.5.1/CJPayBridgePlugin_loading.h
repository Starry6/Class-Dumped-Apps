@interface CJPayBridgePlugin_loading : TTBridgePlugin
- (void)hideLoadingWithParam:callback:engine:controller:;
- (void)showLoadingWithParam:callback:engine:controller:;
+ (void)registerBridge;
+ (unsigned long long)instanceType;
@end
