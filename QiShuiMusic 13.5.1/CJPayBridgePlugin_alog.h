@interface CJPayBridgePlugin_alog : TTBridgePlugin
- (void)alogWithParam:callback:engine:controller:;
+ (void)registerBridge;
+ (unsigned long long)instanceType;
@end
