@interface CJPayBridgePlugin_faceVerification : TTBridgePlugin
- (void)faceVerificationWithParam:callback:engine:controller:;
+ (void)registerBridge;
+ (unsigned long long)instanceType;
@end
