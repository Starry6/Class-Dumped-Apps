@interface CJPayBridgePlugin_setBounce : TTBridgePlugin
- (void)setBounce:webviewController:;
- (void)setBounceWithParam:callback:engine:controller:;
+ (void)registerBridge;
+ (unsigned long long)instanceType;
@end
