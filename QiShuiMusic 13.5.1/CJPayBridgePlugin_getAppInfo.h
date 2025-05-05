@interface CJPayBridgePlugin_getAppInfo : TTBridgePlugin
- (void)getAppInfoWithParam:callback:engine:controller:;
+ (void)registerBridge;
+ (unsigned long long)instanceType;
@end
