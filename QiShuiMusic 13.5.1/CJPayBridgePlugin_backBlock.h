@interface CJPayBridgePlugin_backBlock : TTBridgePlugin
- (void)backBlockWithParam:callback:engine:controller:;
- (void)blockNativeBackWithParam:callback:engine:controller:;
- (void)callJSEvent:;
+ (void)registerBridge;
+ (unsigned long long)instanceType;
@end
