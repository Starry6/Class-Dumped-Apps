@interface CJPayBridgePlugin_login : TTBridgePlugin
- (void)loginWithParam:callback:engine:controller:;
+ (void)registerBridge;
+ (unsigned long long)instanceType;
@end
