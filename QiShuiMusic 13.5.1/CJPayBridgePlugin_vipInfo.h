@interface CJPayBridgePlugin_vipInfo : TTBridgePlugin
- (void)vipInfoWithParam:callback:engine:controller:;
+ (void)registerBridge;
+ (unsigned long long)instanceType;
@end
