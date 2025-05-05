@interface CJPayBridgePlugin_deviceInfo : TTBridgePlugin
- (void)deviceInfoWithParam:callback:engine:controller:;
+ (void)registerBridge;
+ (unsigned long long)instanceType;
@end
