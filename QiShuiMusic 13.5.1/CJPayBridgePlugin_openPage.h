@interface CJPayBridgePlugin_openPage : TTBridgePlugin
- (void)openPageWithParam:callback:engine:controller:;
- (id)init;
+ (void)registerBridge;
+ (unsigned long long)instanceType;
@end
