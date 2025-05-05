@interface CJPayBridgePlugin_copyToClipboard : TTBridgePlugin
- (void)copyToClipboardWithParam:callback:engine:controller:command:;
+ (void)registerBridge;
+ (unsigned long long)instanceType;
@end
