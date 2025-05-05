@interface CJPayBridgePlugin_isAppInstalled : TTBridgePlugin
- (void)isAppInstalledWithParam:callback:engine:controller:;
+ (void)registerBridge;
+ (unsigned long long)instanceType;
@end
