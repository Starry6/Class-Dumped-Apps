@interface CJPayBridgePlugin_sendDeviceInfo : TTBridgePlugin
- (id)metaSecPageCallback;
- (void)sendDeviceInfoWithParam:callback:engine:controller:;
- (void)setDeviceInfoWithParam:callback:engine:controller:;
+ (void)registerBridge;
+ (unsigned long long)instanceType;
@end
