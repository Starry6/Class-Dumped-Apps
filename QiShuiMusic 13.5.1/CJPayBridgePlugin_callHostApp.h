@interface CJPayBridgePlugin_callHostApp : TTBridgePlugin
- (void)callHostAppWithParam:callback:engine:controller:;
+ (void)registerBridge;
+ (id)sharedPlugin;
+ (unsigned long long)instanceType;
@end
