@interface CJPayBridgePlugin_prefetchData : TTBridgePlugin
- (void)prefetchDataWithParam:callback:engine:controller:;
+ (void)registerBridge;
+ (unsigned long long)instanceType;
@end
