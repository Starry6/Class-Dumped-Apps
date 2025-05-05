@interface CJPayBridgePlugin_sendNotification : TTBridgePlugin
- (void)sendNotificationWithParam:callback:engine:controller:;
+ (void)registerBridge;
+ (unsigned long long)instanceType;
@end
