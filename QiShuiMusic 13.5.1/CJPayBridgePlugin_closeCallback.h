@interface CJPayBridgePlugin_closeCallback : TTBridgePlugin
- (void)closeCallbackWithParam:callback:engine:controller:;
+ (void)registerBridge;
+ (unsigned long long)instanceType;
@end
