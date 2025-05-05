@interface CJPayBridgePlugin_setTitle : TTBridgePlugin
- (id)titleFromParam:;
- (void)setTitleWithParam:callback:engine:controller:;
+ (void)registerBridge;
+ (unsigned long long)instanceType;
@end
