@interface CJPayBridgePlugin_facepp : TTBridgePlugin
- (void)faceppWithParam:callback:engine:controller:;
+ (void)registerBridge;
+ (unsigned long long)instanceType;
@end
