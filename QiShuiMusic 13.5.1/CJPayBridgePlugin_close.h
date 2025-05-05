@interface CJPayBridgePlugin_close : TTBridgePlugin
- (void)closeWithParam:callback:engine:controller:;
+ (void)registerBridge;
+ (unsigned long long)instanceType;
@end
