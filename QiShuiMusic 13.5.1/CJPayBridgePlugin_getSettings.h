@interface CJPayBridgePlugin_getSettings : TTBridgePlugin
- (void)getSettingsWithParam:callback:engine:controller:;
+ (void)registerBridge;
+ (unsigned long long)instanceType;
@end
