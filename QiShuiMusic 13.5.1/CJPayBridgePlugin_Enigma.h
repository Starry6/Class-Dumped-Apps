@interface CJPayBridgePlugin_Enigma : TTBridgePlugin
- (void)decryptWithParam:callback:engine:controller:;
- (void)encryptWithParam:callback:engine:controller:;
- (long long)innerCodeFrom:;
+ (void)registerBridge;
+ (unsigned long long)instanceType;
@end
