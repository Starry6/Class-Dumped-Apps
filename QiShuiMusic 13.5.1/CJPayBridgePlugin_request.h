@interface CJPayBridgePlugin_request : TTBridgePlugin
- (void)requestWithParam:callback:engine:controller:;
+ (void)registerBridge;
+ (unsigned long long)instanceType;
@end
